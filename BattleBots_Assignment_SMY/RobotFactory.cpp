#include "RobotFactory.hpp"


CRobotFactory::CRobotFactory()
{
	// Do nothing
}

CRobotFactory::~CRobotFactory()
{
	// Do nothing
}

CustomBot* CRobotFactory::assembleRobot()
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
	tempRobot->setArmor(armor);


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

	return tempRobot;
}


//Robot* CRobotFactory::newRobot(robotType *choice)
//{
//	switch (*choice)
//	{
//	case Scout_e:
//		Scout *p_tempScout = new Scout;
//		p_tempScout->setRobotType(Scout_e);
//		return p_tempScout;
//		break;
//	case Defender_e:
//		Defender *p_tempDefender = new Defender;
//		p_tempDefender->setRobotType(Defender_e);
//		return p_tempDefender;
//		break;
//	case Warrior_e:
//		Warrior *p_tempWarrior = new Warrior;
//		p_tempWarrior->setRobotType(Warrior_e);
//		return p_tempWarrior;
//		break;
//	case Custom_e:
//		CustomBot *p_tempCustomBot = assembleRobot();
//		p_tempCustomBot->setRobotType(Custom_e);
//		return p_tempCustomBot; 
//		break;
//		
//	}
//		//TODO
//	return NULL;
//}

Robot* CRobotFactory::createScout()
{
	return dynamic_cast<Robot*>(new Scout());
}

Robot* CRobotFactory::createWarrior()
{
	return dynamic_cast<Robot*>(new Warrior());
}

Robot* CRobotFactory::createSoldier()
{
	return dynamic_cast<Robot*>(new Soldier());
}

Robot* CRobotFactory::createSniper()
{
	return dynamic_cast<Robot*>(new Sniper());
}

Robot* CRobotFactory::createDefender()
{
	return dynamic_cast<Robot*> (new Defender());
}

Robot* CRobotFactory::createCustom()
{
	return dynamic_cast<Robot*>(assembleRobot());
}

//To extend and add new bots, simply add new create methods.



