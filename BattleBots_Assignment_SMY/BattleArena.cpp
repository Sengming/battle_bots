#include "BattleArena.hpp"
#include "Defines.hpp"


void BattleArena::StartTeam1Turn()
{



}

void BattleArena::StartTeam2Turn()
{




}

void BattleArena::BuildTeam1()
{
	uint32_t *m_robotChoice;

	cout << "Each team has 10 000 points to build their team from, so choose wisely." << dendl;

	cout << "Please pick your robot. You can choose between a scout, a defender, a warrior, a sniper or build your own custom robot." << dendl;

	cout << "1) Scout" << endl;
	cout << "2) Defender" << endl;
	cout << "3) Warrior" << endl;
	cout << "4) Sniper" << endl;
	cout << "5) Custom Robot" << endl;

	while (m_maxpoints >= 0)
	{
		uint32_t m_numberofrobots = 0;
		cin >> *m_robotChoice;

		v_team1.push_back(CRobotFactory::newRobot(m_robotChoice));
		//v_team1->at(m_numberofrobots).e_robotType = 1;
		break;
		


	}

	

}

void BattleArena::BuildTeam2()
{
	//TODO


}

// This method builds a custom robot to add to the vector of objects
uint32_t BattleArena::buildCustomRobot()
{




}