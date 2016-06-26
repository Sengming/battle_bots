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


	return 0;
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

void Robot::setPositioninBattle()
{

	//TODO
}

void Robot::getPositionfromBattle() const
{

	//TODO

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