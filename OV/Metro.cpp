#include "stdafx.h"
#include "Metro.h"
#include <iostream>

void Metro::prijsPerKm()
{
	prijs = 2.70;
	std::cout << "Metrokaartje kost €" << prijs << std::endl;

}

void Metro::maxPassagiers() {
	passagiers = 960;
	std::cout << "max passagiers: " << passagiers << std::endl << std::endl;
}

Metro::Metro(std::string vervoersmiddel) : OpenbaarVervoer(vervoersmiddel) {}