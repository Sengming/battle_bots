#ifndef COMMANDLINE_H_
#define COMMANDLINE_H_

#include "Defines.hpp"
#include "BattleArena.hpp"
#include <iostream>

using namespace std;

class CommandLineInterface
{
public:
	CommandLineInterface();
	~CommandLineInterface();

	
	
	//Upon starting the program, the user has the ability to add robots to each team.
	//This section contains the functions involved in adding robots to each team whether they be pre-defined robots or robots 'built' by the user.
	
	void getUserInput();
	
	uint32_t BuildTeam();
	void BuildNewRobot();
	void AddPreBuiltRobot();

	//This next section is involved in having the robots do battle.
	

	void StartBattle();


	


private:
	void RobotAttack();
	void RobotDefend();
	BattleArena *m_battle = new BattleArena;

};



#endif
