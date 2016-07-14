#pragma once
#ifndef ROBOT_H_
#define ROBOT_H_
#include "Defines.hpp"
#include "Armor.hpp"
#include "Weapon.hpp"
#include <string>

class Robot {

public:

	Robot();
	virtual ~Robot() = 0;
	virtual uint32_t RecieveFire();
	
	virtual uint32_t SendFire();
	virtual std::string getRobotName() const;
	virtual void setRobotName(std::string);

	virtual uint32_t getRobotNumber() const;
	virtual void setRobotNumber(uint32_t);

	virtual Armor getArmor() const;
	virtual void setArmor(ArmorType*);
	virtual Weapon getWeapon() const;
	virtual void setWeapon(WeaponType*);
	//virtual void AllocateToArmor();

	//virtual void AllocateToWeapon();
	virtual void SPecialAttack() = 0;
	virtual void setPositioninBattle();
	virtual void getPositionfromBattle() const;
	virtual void setRobotType(robotType);
	virtual robotType getRobotType();

	// Functions for lists of robots:
	Robot* getNextRobotInList() const;
	void setNextRobotInList(Robot*);


	


protected:
	uint32_t Position[10][10];
	uint32_t m_robotNumber;
	uint32_t Energy;
	Armor Armor;
	Weapon Weapon;
	robotType e_robotType;
	Robot* m_nextRobot;
	std::string m_robotName;



};



#endif
