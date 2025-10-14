#include <iostream>
#include "Dice.h"

int main() {
	Dice diceBag[5] = {Dice(6), Dice(20), Dice(8), Dice(100), Dice(-10)};
	for (const Dice dice : diceBag) {
		std::cout << "Lancer de de a " << dice.getNbSides() << " faces : " << dice.roll() << std::endl;
	}

	system("pause");
	return 0;
}

