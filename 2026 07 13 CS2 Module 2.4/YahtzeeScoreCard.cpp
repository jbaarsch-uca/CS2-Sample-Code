#include "YahtzeeScoreCard.h"
#include <string>

YahtzeeScoreCard::YahtzeeScoreCard(): YahtzeeScoreCard(BASIC) {

}
YahtzeeScoreCard::YahtzeeScoreCard(GameLevel l) {
	level = l;
	scores = new ScoreLine[level];
	for (int i = 0; i < level; i++)
		scores[i] = { SCORE_FIELD_NAMES[i] , 0, false};

}
YahtzeeScoreCard::~YahtzeeScoreCard() {
	delete[] scores;
	scores = nullptr;
}
bool YahtzeeScoreCard::hasBeenScored(int scoreLine) const {
	return scores[scoreLine].hasScored;
}
void YahtzeeScoreCard::score(Die* dice, int size, int scoreLine) {
	if (!hasBeenScored(scoreLine)) {
		if (scoreLine < BASIC) {
			int scoreSum = 0;
			for (int die = 0; die < size; die++) {
				if (dice[die].getFaceValue() == scoreLine + 1)
					scoreSum += (scoreLine + 1);
			}
			scores[scoreLine].score = scoreSum;
			//scores[scoreLine].hasScored = true;
		}
		else
		{
			switch (scoreLine) {
			case 6:
				scores[6].score =
					(checkFullHouse(dice, size) ? 25 : 0);
				break;
			case 7:
				scores[7].score =
					(checkSmallStraight(dice, size) ? 30 : 0);
				break;
			case 8:
				scores[8].score =
					(checkLargeStraight(dice, size) ? 40 : 0);
				break;
			case 9:
				scores[9].score = scoreXOfKind(dice, size, 3);
				break;
			case 10:
				scores[10].score = scoreXOfKind(dice, size, 4);
				break;
			case 11:
				scores[11].score = scoreChance(dice, size);
				break;
			case 12:
				scores[12].score =
					checkYahtzee(dice, size) ? 50 : 0;
			}
		}
		scores[scoreLine].hasScored = true;
	}


}
string YahtzeeScoreCard::getScoreCard() const {
	string result = "";
	int sum = 0;
	for (int score = 0; score < level; score++) {
		if (scores[score].hasScored) {
			result += scores[score].name + ": \t" +
				to_string(scores[score].score) + "\n";
			sum += scores[score].score;
		}
		else {
			result += scores[score].name + ": \tNot Scored\n";
		}
	}
	result += "TOTAL SCORE:  \t" + to_string(sum) + "\n\n";

	return result;
}

bool YahtzeeScoreCard::checkFullHouse(Die* dice, int size) {
	// count up the number of each possible die value on the dice
	// then check for a pair and a triplet. 
	
	int numSides = dice[0].getNumSides();
	int* diceValues = new int[numSides];
	// initialize all the diceValue Counts to zero
	for (int i = 0; i < numSides; i++)
		diceValues[i] = 0;
	// count up the number of each times each value has rolled.
	for (int die = 0; die < size; die++) {
		diceValues[dice[die].getFaceValue() - 1] ++;
	}
	bool hasPair = false;
	bool hasTriplet = false;
	for (int i = 0; i < numSides; i++) {
		if (diceValues[i] == 2)
			hasPair = true;
		if (diceValues[i] == 3)
			hasTriplet = true;
	}
	delete[] diceValues;
	diceValues = nullptr;
	return hasPair && hasTriplet;

}
int YahtzeeScoreCard::scoreXOfKind(Die* dice, int size, int x) {
	
	
	int numSides = dice[0].getNumSides();
	int* diceValues = new int[numSides];
	// initialize all the diceValue Counts to zero
	for (int i = 0; i < numSides; i++)
		diceValues[i] = 0;
	// count up the number of each times each value has rolled.
	for (int die = 0; die < size; die++) {
		diceValues[dice[die].getFaceValue() - 1] ++;
	}
	// check if any are larger than x (3 or 4)
	for (int i = 0; i < numSides; i++)
		if (diceValues[i] >= x) {
			int total = (i + 1) * diceValues[i];
			delete[] diceValues;
			diceValues = nullptr;
			return total;
		}
	return 0;
}

bool YahtzeeScoreCard::checkSmallStraight(Die* dice, int size) {
	if ((diceHaveA(dice, size, 1)  // case one 1-4
		&& diceHaveA(dice, size, 2)
		&& diceHaveA(dice, size, 3)
		&& diceHaveA(dice, size, 4) )
		||
		(diceHaveA(dice, size, 2)   // case two: 2-5
			&& diceHaveA(dice, size, 3)
			&& diceHaveA(dice, size, 4)
			&& diceHaveA(dice, size, 5)
			)
		||
		(diceHaveA(dice, size, 3)   // case three: 3-6
			&& diceHaveA(dice, size, 4)
			&& diceHaveA(dice, size, 5)
			&& diceHaveA(dice, size, 6) ) )  // end if
		return true;
	else return false;
}
bool YahtzeeScoreCard::checkLargeStraight(Die* dice, int size) {
	if ((diceHaveA(dice, size, 1)  // case one 1-5
		&& diceHaveA(dice, size, 2)
		&& diceHaveA(dice, size, 3)
		&& diceHaveA(dice, size, 4)
		&& diceHaveA(dice, size, 5))
		||
		(diceHaveA(dice, size, 2)   // case two: 2-6
			&& diceHaveA(dice, size, 3)
			&& diceHaveA(dice, size, 4)
			&& diceHaveA(dice, size, 5)
			&& diceHaveA(dice, size, 6)))  // end if
		return true;
	else return false;
}
int YahtzeeScoreCard::scoreChance(Die* dice, int size) {
	int sum = 0;
	for (int die = 0; die < size; die++)
		sum += dice[die].getFaceValue();
	return sum;
}
// All numbers = each other;
bool YahtzeeScoreCard::checkYahtzee(Die* dice, int size) {
	bool yahtzee = true;
	for (int die = 0; die < size; die++) {
		if (dice[die].getFaceValue() != dice[0].getFaceValue())
			yahtzee = false;
	}
	return yahtzee;
}

bool YahtzeeScoreCard::diceHaveA(Die* dice, int size, int target) {
	for (int die = 0; die < size; die++) {
		if (dice[die].getFaceValue() == target)
			return true;
	}
	return false;
}