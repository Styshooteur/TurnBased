#include "pc_elias.h"
#include "iostream"

Elias::Elias()
{
	name = "Elias";
	hp = 300;
	damage = 20; 
}

int Elias::getHP() {
	return hp;
}

int Elias::getDamage() {
	return damage;
}

std::string Elias::getName() {
	return name;
}

void Elias::ChooseAttack() {
	int attack;
	switch(attack) {
		case(Woohoo):
			std::cout << "Elias used Woohoo\n ";
			break;
		case(Pathfinding):
			std::cout << "Elias used Pathfinding\n ";
			break;
		case(SoupBowl):
			std::cout << "Elias used SoupBowl\n ";
			break;
		case(LateArrival):
			std::cout << "Elias used LateArrival\n ";
			break;
		default:
			std::cout << "Nothing happen\n ";
	}

}