#pragma once
#ifndef ROBOTFACTORY_H_
#define ROBOTFACTORY_H_
#include "Robot.hpp"
#include "Scout.hpp"
#include "CustomBot.hpp"
#include "Defender.hpp"
#include "Soldier.hpp"
#include "Sniper.hpp"
#include "Warrior.hpp"
#include "Defines.hpp"
#include "IRobotFactoryInterface.hpp"
#include <iostream>
#include <string>
#include <random>

using namespace std;

class CRobotFactory : public IRobotFactoryInterface
{
public:
	CRobotFactory();
	~CRobotFactory();

	Robot* createScout();
	Robot* createSoldier();
	Robot* createSniper();
	Robot* createWarrior();
	Robot* createCustom();
	Robot* createDefender();
	//static robot* newrobot(robottype* );


private:
	CustomBot* assembleRobot();


};



















#endif