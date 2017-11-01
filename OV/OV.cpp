// OV.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Bus.h"
#include "Trein.h"
#include "Metro.h"
#include "OpenbaarVervoer.h"



int main() {
	Metro metro1 = Metro(metro1);
	Trein trein1 = Trein(trein1);
	Bus bus1 = Bus(bus1);

	metro1.prijsPerKm();
	metro1.maxPassagiers();

	trein1.prijsPerKm();
	trein1.maxPassagiers();
	bus1.prijsPerKm();
	bus1.maxPassagiers();


	std::cout << "De metro levert €" << metro1.prijs*metro1.passagiers << std::endl;
	std::cout << "De trein levert €" << trein1.prijs*trein1.passagiers <<  std::endl;
	std::cout << "De bus levert €" << bus1.prijs*bus1.passagiers  << std::endl;

	return 0;
}