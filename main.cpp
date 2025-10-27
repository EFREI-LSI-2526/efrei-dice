#include <iostream>
#include "Dice.h"
#include "D6.h"
#include "D20.h"
#include "Coin.h"
#include "D4.h"
#include "TrickD6.h"

int main() {
	TrickD6 trickD6 = TrickD6();
	Dice copy = trickD6;
	Dice diceBag[1] = {trickD6};
	for (int i = 0 ; i < 1; i++) {
		Dice* dice = &diceBag[i];
		std::cout << "Lancer de de a " << dice->getNbSides() << " faces : " << dice->roll() << std::endl;
	}
	std::cout << copy.roll() << std::endl;
	std::cout << &trickD6 << " " << &copy << std::endl;
	system("pause");
	return 0;
}

