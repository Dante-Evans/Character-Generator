#include <iostream>
#include "Function.h"
#include <vector>

void alterPlayerStats(int *ptrNum, int *ptrRace, int *ptrStat)
{	
	int sum = *ptrNum + *ptrRace;
	int temp = sum;
	*ptrStat = temp;
	std::cout << temp << "\n";
}

void playerStats(std::vector<charStats>& arr, int n) //a function to get the stat name and stat values
{
	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i].statName << " " << arr[i].statValue << "\n";
		arr.size();
	}
}