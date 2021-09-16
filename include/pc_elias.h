#pragma once

#include "string"

class Elias {

	enum EliasAttack
	{
		Woohoo,
		Pathfinding,
		SoupBowl,
		LateArrival,
	};

public:
	Elias();

	//Functions
	/*void Woohoo();
	void PathFinding();
	void SoupBowl();
	void LateArrival();*/
	void ChooseAttack();

	//Accessors
	int getHP();
	int getDamage();
	std::string getName();

private:
	std::string name;
	int hp;
	int damage;
	bool confuse = false;
};