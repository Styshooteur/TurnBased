#pragma once

#include "string"

class Gpr920 {

	enum Gpr920Attack
	{

	};

public:
	Gpr920();

	//Functions
	void Dip();
	void PublicVariable();
	void Stroustrup();
	void Fred();

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