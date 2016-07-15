#pragma once
#ifndef IARMOR_HPP_
#define IARMOR_HPP_
#include "Defines.hpp"

class IArmor
{
public:
	IArmor() {};
	virtual ~IArmor() = 0;

protected:
	virtual uint32_t getArmorValue() const = 0;

};






















#endif