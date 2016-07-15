
#include <iostream>
#include <typeinfo>
#include "Defines.hpp"

using namespace std;


namespace {

	const int ConstantPlaceHolder1 = 0;
	const int ConstantPlaceHolder2 = 0;
}


extern void createRobotsAndTeams();
extern void team1Turn();
extern void team2Turn();
extern void endTheGame();

extern void main()
{
	robotStates_e highLevelStates;
	// Main state machine:
	for (;;)
	{
		switch (highLevelStates)
		{
		case createbots:
			// Call into function to create robots
			break;

		case team1turn:

			// Call into function to control team 1
			break;

		case team2turn:

			// Call into function to control team 2
			break;

		case endgame:

			// Call into function to end the game
			break;
		}

	}
}

// Member functions;

extern void createRobotsAndTeams()
{
	createBotSubstates_e creationSubstates;
	//TODO
}

extern void team1Turn()
{
	teamTurnSubstates_e team1Substates;
	// TODO


}

extern void team2Turn()
{
	teamTurnSubstates_e team2Substates;
	// TODO
}

extern void endTheGame()
{
	// TODO

}