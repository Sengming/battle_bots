#pragma once
#ifndef BATTLEARENA_H_
#define BATTLEARENA_H_
#include "Defines.hpp"
#include <iostream>
#include "Robot.hpp"
#include <vector>
#include "RobotFactory.hpp"

using namespace std;


class BattleArena
{
public:

	void StartTeam1Turn();
	void StartTeam2Turn();

	void BuildTeam1();
	void BuildTeam2();

	vector<Robot*> v_team1;
	vector<Robot*> v_team2;


protected:




private:
	uint32_t m_maxpoints;
	uint32_t buildCustomRobot();



};









#endif