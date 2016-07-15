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

	// Note from developer: I realize this is BAD implementation, and it would've been better if we had
	// subclasses for each armor type, but in this case the only difference between the armors is the value...so... 
	switch (m_type)
	{
	case unobtanium:
		m_armorValue = 5000;
		break;
	case adamantium:
		m_armorValue = 4000;
		break;
	case mithril:
		m_armorValue = 3000;
		break;
	case steel:
		m_armorValue = 2000;
		break;
	case iron:
		m_armorValue = 1000;
		break;
	case bronze:
		m_armorValue = 500;
		break;
	}

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

uint32_t Armor::getArmorValue() const
{
	return m_armorValue;
}

void Armor::setArmorValue(uint32_t value)
{
	m_armorValue = value;
}