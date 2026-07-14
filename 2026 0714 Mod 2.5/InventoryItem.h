#pragma once
#include <iostream>
#include <vector>
using namespace std;
class InventoryItem
{

private:
	string parts[3] = {"Part one", "2", "3"};
	int size = 3;


public:
	InventoryItem();
	void changeParts(vector<string> moreParts);
	string* getParts();

};

