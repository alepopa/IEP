#pragma once
#ifndef AIRPORT_HPP
#define AIRPORT_HPP

#include <iostream>
#include <string>
#include <stdio.h>
#include <cstring>
#include <list>
#include "Airplane.hpp"

using namespace std;

class Airport
{
public:
	list<Airplane> airplanes;
	Airport();
	~Airport();
	void addCargoAirplane();
	void addPassengerAirplane();
	void viewAirplanes();
	void deleteAirplaneById(int i);
	void viewFunctionalAirplanes();
	void viewUnfunctionalAirplanes();
};

#endif // AIRPORT_HPP