#include "RobotFactory.hpp"


RobotFactory::RobotFactory()
{
}

RobotFactory::~RobotFactory()
{
}

Robot* RobotFactory::newRobot(uint32_t *choice)
{

	if (*choice == 1)
	{
		Scout *p_tempScout= new Scout;
		p_tempScout->setRobotType(Scout_e);
		return p_tempScout;
	}
	if (*choice == 2)
	{
		Defender *p_tempDefender = new Defender;
		p_tempDefender->setRobotType(Defender_e);
		return p_tempDefender;
	}
	if (*choice == 3)
	{
		Warrior *p_tempWarrior = new Warrior;
		p_tempWarrior->setRobotType(Warrior_e);
		return p_tempWarrior;
	}
	if (*choice == 4)
	{ 
		CustomBot *p_tempCustomBot = assembleRobot();

		p_tempCustomBot->setRobotType(Custom_e);
		return p_tempCustomBot;

	
	}
		//TODO
	return NULL;
}

CustomBot* RobotFactory::assembleRobot()
{
	CustomBot* tempRobot = new CustomBot;
	uint32_t tempArmor;
	uint32_t tempWeapon;
	WeaponType *weapon;
	ArmorType *armor;
	cout << "Choose your armor type:" << dendl;
	cout << "1) Bronze" << endl;
	cout << "2) Iron" << endl;
	cout << "3) Steel" << endl;
	cout << "4) Mithril" << endl;
	cout << "5) Adamantium" << endl;
	cout << "6) Unobtanium" << endl;

	cin >> tempArmor;
	*armor = static_cast<ArmorType> (tempArmor);
	tempRobot ->setArmor(armor);


	cout << "Choose your weapon type:" << dendl;
	cout << "1) Pistol" << endl;
	cout << "2) Rifle" << endl;
	cout << "3) Bazooka" << endl;
	cout << "4) GaussRifle" << endl;
	cout << "5) EMP Gun" << endl;
	cout << "6) Elephant Gun" << endl;

	cin >> tempWeapon;
	*weapon = static_cast <WeaponType> (tempWeapon);
	tempRobot->setWeapon(weapon);




}

