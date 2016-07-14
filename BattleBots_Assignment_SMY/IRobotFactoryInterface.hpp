#pragma once
#ifndef IROBOTFACTORYINTERFACE_H_
#define IROBOTFACTORYINTERFACE_H_
#include "Robot.hpp"

class IRobotFactoryInterface
{
public:
	virtual ~IRobotFactoryInterface() = 0;
	virtual Robot* createScout() = 0;
	virtual Robot* createSniper() = 0;
	virtual Robot* createWarrior() = 0;
	virtual Robot* createSoldier() = 0;
	virtual Robot* createCustom() = 0;
	virtual Robot* createDefender() = 0;

protected:
	IRobotFactoryInterface() {};
};

























#endif