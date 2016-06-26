#pragma once
#ifndef ARMOR_H_
#define ARMOR_H_
#include "Defines.hpp"

class Armor
{
public:
	Armor();
	~Armor();
	void setArmorType(ArmorType*);
	ArmorType getArmorType() const;


private:
	//Functions to calculate damage taken should be placed here
	ArmorType m_type;
	uint32_t calcDamageTaken();
	uint32_t shotAdjuster();



};






#endif