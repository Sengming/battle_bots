
#include "RobotList.hpp"

// Overload constructor
CRobotList::CRobotList(Robot* initialRobot)
{
	m_head = initialRobot;
	m_tail = m_head;
	m_robotCount = 0;
}

// Default Constructor
CRobotList::CRobotList()
{
	m_head = NULL;
	m_tail = NULL;
	m_robotCount = 0;
}

// Destructor
CRobotList::~CRobotList()
{
	// Do nothing
}

// Overloaded instantiation method for singleton:
CRobotList* CRobotList::getInstance(Robot* initialRobot)
{
	if (uniqueInstance == NULL)
	{
		uniqueInstance = new CRobotList(initialRobot);
		return uniqueInstance;
	}
	else
	{
		return uniqueInstance;
	}
}

// Default instantiation method for singleton:
CRobotList* CRobotList::getInstance()
{
	if (uniqueInstance == NULL)
	{
		uniqueInstance = new CRobotList();
		return uniqueInstance;
	}
	else
	{
		return uniqueInstance;
	}
}


// This function searches through the list for robot name
Robot* CRobotList::searchRobot(std::string searchString)
{
	// initialize parser to the head of the list
	Robot* currentRobot = m_head;
	Robot* previousNode = NULL;
	for (uint32_t robotParse = 0; robotParse <= m_robotCount; ++robotParse)
	{
		if ((currentRobot->getRobotName()).compare(searchString) == 0)
		{
			return currentRobot;
		}
		else
		{
			previousNode = currentRobot;
			currentRobot = currentRobot->getNextRobotInList();
		}
	}
	// if code gets here, there were no matches. We return NULL if this is the case.
	return NULL;
}

// Overload function for looking for the robot based on its number (ID):
Robot* CRobotList::searchRobot(uint32_t robotID)
{
	// initialize parser to the head of the list
	Robot* currentRobot = m_head;
	for (uint32_t robotParse = 0; robotParse <= m_robotCount; ++robotParse)
	{
		if (currentRobot->getRobotNumber() == robotID)
		{
			return currentRobot;
		}
		else
		{
			currentRobot = currentRobot->getNextRobotInList();
		}
	}
	// if code gets here, there were no matches. We return NULL if this is the case.
	return NULL;
}


// This function appends a robot to list and returns 0 for success and 1 for error

uint32_t CRobotList::appendToList(Robot* robotToAppend)
{
	// Add one to total number of robots.
	++m_robotCount;
	if (m_robotCount <= m_maxRobotCount)
	{
		m_tail->setNextRobotInList(robotToAppend);
		m_tail = robotToAppend;
		m_tail->setNextRobotInList((Robot*)NULL);
		if (m_robotCount == 0)
		{
			// if we're the first element to be appended, then head is also the robot to append.
			m_head = robotToAppend;
		}
		return 0;
	}
	else
	{
		--m_robotCount;
		return 1;
	}
}

// This function removes a single robot from the list once the ID of the robot is matched to the list
uint32_t CRobotList::removeFromList(uint32_t robotID)
{
	Robot* robotToRemove = searchRobot(robotID);
	Robot* previousNode = previousNode;
	if (robotToRemove == NULL)
	{
		return 1;
	}
	else
	{
		robotToRemove->setNextRobotInList


	}
}

