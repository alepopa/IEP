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
	list<Airplane*> airplanes;
	Airport();
	~Airport();
	void addAirplane(Airplane *airplane);
	void viewAirplanes();
	void deleteAirplaneById(int id);
	void viewFunctionalAirplanes(int id);
	void viewUnfunctionalAirplanes(int id);
};

#endif // AIRPORT_HPP