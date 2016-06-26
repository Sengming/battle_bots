#include "CommandLine.hpp"

CommandLineInterface::CommandLineInterface()
{
	
}

CommandLineInterface::~CommandLineInterface()
{
}

// This function works primarily to get the user input for building a team as its name suggests. 
 
void CommandLineInterface::getUserInput()
{
	uint32_t teamnumber=0;

	cout << "Hello and welcome to the Battlebots program" << dendl;

	cout << "Please enter your team number (team 1 or team 2)." << dendl;
	cin >> teamnumber;

	switch (teamnumber)
	{
	default:
		cout << "Invalid selection. Exiting." << dendl;
		exit(1);
		break;
	case 1: 
		m_battle -> BuildTeam1();
		break;

	case 2: 
		m_battle -> BuildTeam2();
		break;

	}



}


void CommandLineInterface::AddPreBuiltRobot()
{
	int points;

	//TODO

}


void CommandLineInterface::BuildNewRobot()
{




}

uint32_t CommandLineInterface::BuildTeam()
{



}




void CommandLineInterface::StartBattle()
{



}