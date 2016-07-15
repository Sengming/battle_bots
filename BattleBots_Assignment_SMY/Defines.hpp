#pragma once
#ifndef DEFINES_H_
#define DEFINES_H_

typedef char			char_t;
typedef signed char		int8_t;
typedef unsigned char	uint8_t;
typedef signed short	int16_t;
typedef unsigned short	uint16_t;
typedef signed long		int32_t;
typedef unsigned long	uint32_t;
typedef float			float32_t;
typedef double			float64_t;
typedef bool			bool_t;

#define dendl	endl << endl

enum ArmorType
{
	bronze = 1,
	iron = 2,
	steel = 3,
	mithril = 4,
	adamantium = 5,
	unobtanium = 6

};

enum WeaponType
{
	pistol = 1,
	rifle = 2,
	bazooka = 3,
	gaussrifle = 4,
	empGun = 5,
	elephantGun =6

};

enum robotType 
{
	null = 0,
	Scout_e = 1,
	Defender_e = 2,
	Warrior_e = 3,
	Sniper_e = 4,
	Custom_e = 5

};

typedef enum robotStates
{
	createbots = 0,
	team1turn,
	team2turn,
	endgame
}robotStates_e;

typedef enum createBotSubstates
{
	customBot = 0,
	normalBot
}createBotSubstates_e;

typedef enum teamTurn
{
	selectRobot = 0,
	surrender,
	move,
	attack,
	special_move
}teamTurnSubstates_e;


#endif