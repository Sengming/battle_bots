#include "Armor.hpp"

Armor::Armor()
{
}

Armor::~Armor()
{
}

void Armor::setArmorType(ArmorType* tempType)
{
	m_type = *tempType;

}


ArmorType Armor::getArmorType() const
{
	//TODO
	return m_type;
}

uint32_t Armor::calcDamageTaken()
{


	//TODO
	return 0;
}

uint32_t Armor::shotAdjuster()
{


	//TODO
	return 0;
}