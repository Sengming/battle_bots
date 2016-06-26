#pragma once
#ifndef ROBOT_H_
#define ROBOT_H_
#include "Defines.hpp"
#include "Armor.hpp"
#include "Weapon.hpp"

class Robot {

public:
	Robot();
	virtual ~Robot();
	virtual uint32_t RecieveFire();
	virtual uint32_t SendFire();
	virtual Armor getArmor() const;
	virtual void setArmor(ArmorType*);
	virtual Weapon getWeapon() const;
	virtual void setWeapon(WeaponType*);
	//virtual void AllocateToArmor();
	//virtual void AllocateToWeapon();
	virtual void SPecialAttack();
	virtual void setPositioninBattle();
	virtual void getPositionfromBattle() const;
	virtual void setRobotType(robotType);
	virtual robotType getRobotType();
	



	


protected:
	uint32_t Position[10][10];
	uint32_t RobotNumber;
	uint32_t Energy;
	Armor Armor;
	Weapon Weapon;
	robotType e_robotType;





};



#endif
