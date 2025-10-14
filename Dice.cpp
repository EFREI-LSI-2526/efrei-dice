//
// Created by JAD on 14/10/2025.
//

#include <algorithm>
#include "Dice.h"
Dice::Dice(): Dice(6) { }

Dice::Dice(const int nbSides) {
	this->nbSides = std::max(2, nbSides);
}

Dice::Dice(const Dice &other): Dice(other.nbSides) { }

int Dice::roll() const {
	return rand() % nbSides + 1;
}

int Dice::getNbSides() const {
	return this->nbSides;
}
int Dice::roll(const int nbRolls) const {
	int result = 0;
	for (int i = 0; i < nbRolls; i++) {
		result += roll();
	}
	return result;
}
