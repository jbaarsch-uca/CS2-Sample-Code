#pragma once
#include <iostream>
#include "Die.h"
using namespace std;

class YahtzeeScoreCard
{

public: 
	enum GameLevel { BASIC = 6, ADVANCED = 13 };
private: 
	struct ScoreLine {
		string name;
		int score;
		bool hasScored;
	};
	ScoreLine* scores;
	GameLevel level;
	// 13 different possible scorecard fields
	const string SCORE_FIELD_NAMES[13] = {"1s", "2s", "3s", "4s", "5s", "6s",
	"Full House", "Small Straight", "Large Straight", "3 of a Kind",
	"4 of a Kind", "Chance", "Yahtzee"};
	
	// The scorecard is also performing the scoring logic; This
	// is controversial, because maybe the scorecard should just
	// be recording, not thinking. 
	bool checkFullHouse(Die* dice, int size);
	int scoreXOfKind(Die* dice, int size, int x);
	bool checkSmallStraight(Die* dice, int size);
	bool checkLargeStraight(Die* dice, int size);
	int scoreChance(Die* dice, int size);
	
	// helper function that returns true if the dice array has a particular value
	bool diceHaveA(Die* dice, int size, int target);
	  


public:
	YahtzeeScoreCard();
	YahtzeeScoreCard(GameLevel level);
	~YahtzeeScoreCard();
	bool hasBeenScored(int scoreLine) const;
	void score(Die* dice, int size, int scoreLine);
	string getScoreCard() const;
	bool checkYahtzee(Die* dice, int size);
};

