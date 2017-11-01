#include "stdafx.h"
#include "Trein.h"
#include <iostream>

void Trein::prijsPerKm()
{
	prijs = 7.50;
	std::cout << "Treinkaartje kost €" << prijs << std::endl;

}

void Trein::maxPassagiers() {
	passagiers = 597;
	std::cout << "max passagiers: " << passagiers << std::endl << std::endl;
}

Trein::Trein(std::string vervoersmiddel) : OpenbaarVervoer(vervoersmiddel) {}