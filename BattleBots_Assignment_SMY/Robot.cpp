#include "Robot.hpp"
#include "Defines.hpp"

Robot :: Robot()
{
	// Defalt constructor of base class. 

}

Robot::~Robot()
{
	// Base class destructor

}

uint32_t Robot::RecieveFire()
{

}

uint32_t Robot::SendFire()
{


	return 0;
}

Armor Robot:: getArmor() const
{


	return Armor;
}

void Robot::setArmor(ArmorType *temparmor)
{
	Armor.setArmorType(temparmor);

}

Weapon Robot::getWeapon() const
{


	return Weapon;
}

void Robot::setWeapon(WeaponType *tempWeapon)
{
	Weapon.setWeaponType(tempWeapon);

}

void Robot::SPecialAttack()
{


	//TODO

}

std::string Robot::getRobotName() const
{
	return m_robotName;
}

void Robot::setRobotName(std::string robotName)
{
	m_robotName = robotName;
}

uint32_t Robot::getRobotNumber() const
{
	return m_robotNumber;
}

void Robot::setRobotNumber(uint32_t robotNumber)
{
	m_robotNumber = robotNumber;
}

void Robot::setPositioninBattle()
{

	//TODO
}

void Robot::getPositionfromBattle() const
{

	//TODO

}

Robot* Robot::getNextRobotInList() const
{
	return m_nextRobot;
}

void Robot::setNextRobotInList(Robot* nextRob)
{
	m_nextRobot = nextRob;
}

void Robot::setRobotType(robotType type)
{
	e_robotType = type;

	//TODO
}

robotType Robot::getRobotType()
{

	return e_robotType;
	//TODO
}