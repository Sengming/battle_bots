#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}

WeaponType Weapon::getWeaponType() const
{

	return m_RobotWeapon;
}


void Weapon::setWeaponType(WeaponType* tempWeapon)
{


	m_RobotWeapon = *tempWeapon;
}


