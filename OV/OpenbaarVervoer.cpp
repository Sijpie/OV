#include "stdafx.h"
#include "OpenbaarVervoer.h"
#include <iostream>
#include <string>

void OpenbaarVervoer::prijsPerKm() {
	std::cout << "prijs p/km" << std::endl;
}


OpenbaarVervoer::OpenbaarVervoer(const std::string& vervoersmiddel) : vervoersmiddel(vervoersmiddel) {
}



OpenbaarVervoer::OpenbaarVervoer()
{
	std::cout << "Openbaar Vervoer" << std::endl;
}