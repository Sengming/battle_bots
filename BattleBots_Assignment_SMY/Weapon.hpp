#pragma once
#ifndef WEAPON_H_
#define WEAPON_H_
#include "Defines.hpp"

class Weapon
{
public:
	Weapon();
	~Weapon();
	void setWeaponType(WeaponType*);
	WeaponType getWeaponType() const;

private:
	WeaponType m_RobotWeapon;


};




#endif