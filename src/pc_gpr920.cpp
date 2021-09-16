#include "pc_gpr920.h"

Gpr920::Gpr920()
{
	name = "Gpr920";
	hp = 300;
	damage = 10;
}

int Gpr920::getHP() {
	return hp;
}

int Gpr920::getDamage() {
	return damage;
}

std::string Gpr920::getName() {
	return name;
}
