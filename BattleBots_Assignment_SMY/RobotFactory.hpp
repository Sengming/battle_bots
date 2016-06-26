#pragma once
#ifndef ROBOTFACTORY_H_
#define ROBOTFACTORY_H_
#include "Robot.hpp"
#include "Scout.hpp"
#include "CustomBot.hpp"
#include "Defender.hpp"
#include "Warrior.hpp"
#include "Defines.hpp"
#include <iostream>
#include <string>
#include <random>

using namespace std;

class RobotFactory
{
public:
	RobotFactory();
	~RobotFactory();

	static Robot* newRobot(uint32_t* );
	static CustomBot* assembleRobot();

private:

};



















#endif