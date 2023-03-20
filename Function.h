#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

struct charStats { //creating a structure for the stats to be stored
	std::string statName; //creating the structure values
	int statValue;
};

void playerStats(std::vector<charStats> &arr, int n);
void alterPlayerStats(int *ptrNum, int *ptrRace, int *ptrStat);