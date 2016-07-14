#pragma once
#ifndef ROBOTLIST_HPP_
#define ROBOTLIST_HPP_

#include "Robot.hpp"
#include <string>
// 
class CRobotList
{
public:
	~CRobotList();
	static CRobotList* getInstance(Robot* );
	static CRobotList* getInstance();
	Robot* searchRobot(std::string);
	Robot* searchRobot(uint32_t);
	uint32_t appendToList(Robot*);
	uint32_t removeFromList(uint32_t);

protected:


private:
	CRobotList(Robot*);
	CRobotList();
	Robot* m_head;
	Robot* m_tail;
	std::string m_robotnameLookup[5];	// Initialize to 5 robots max per team.
	uint32_t m_robotCount;
	const uint32_t m_maxRobotCount = 5; // Initialize to 5 robots max per team.
	static CRobotList* uniqueInstance;
};


#endif