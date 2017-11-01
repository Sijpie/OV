#include "stdafx.h"
#include "Bus.h"
#include <iostream>

void Bus::prijsPerKm()
{
	prijs = 2.70;
	std::cout << "Buskaartje kost €" << prijs << std::endl;

}

void Bus::maxPassagiers() {
	passagiers = 91;
	std::cout << "max passagiers: " << passagiers << std::endl << std::endl;
}

Bus::Bus(std::string vervoersmiddel) : OpenbaarVervoer(vervoersmiddel) {}