#include <iostream>
#include <vector>
#include "Function.h"

using namespace std;

vector<charStats> playStats; //creates the vector for the player stats

int main()
{
	string charName; //creating the name for the character
	string race[4] = { "Human", "Orc", "Elf", "Dwarf"}; //An array of races the player can choose from.
	string pRace; //Variable for the player race
	
	
	//creates the different elements for the struct array
	charStats strength; 
	strength.statName = "Strength";
	strength.statValue = 10;
	charStats dexterity;
	dexterity.statName = "Dexterity";
	dexterity.statValue = 10;
	charStats constitution;
	constitution.statName = "Constitution";
	constitution.statValue = 10;
	charStats perception;
	perception.statName = "Perception";
	perception.statValue = 10;
	charStats wisdom;
	wisdom.statName = "Wisdom";
	wisdom.statValue = 10;
	charStats agility;
	agility.statName = "Agility";
	agility.statValue = 10;
	charStats intelligence;
	intelligence.statName = "Intelligence";
	intelligence.statValue = 10;

	//pushes the elements into the vector
	playStats.push_back(strength);
	playStats.push_back(dexterity);
	playStats.push_back(constitution);
	playStats.push_back(perception);
	playStats.push_back(wisdom);
	playStats.push_back(agility);
	playStats.push_back(intelligence);
		
	cout << "What race would you like to select?\n\n";
	for (int i = 0; i < 4; i++)
	{
		cout << race[i] << "\n";
	}
	cin >> pRace;
	cout << "You chose to be an " << pRace << "\n\n";
	cout << "Your stats are now:\n\n";
	playerStats(playStats, 7);
	for (int i = 0; i < 7; i++)
	{
		cout << playStats[i].statName << " " << playStats[i].statValue << "\n";
	}

	return 0;
}