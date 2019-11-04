#include "Airport.hpp"

Airport::Airport() {}

Airport::~Airport() {}

void Airport::viewAirplanes()
{
	std::list<Airplane*>::iterator it;
	for (it = airplanes.begin(); it != airplanes.end(); it++)
	{
		(*it)->print();
	}
	std::cout << std::endl;
}

void Airport::addAirplane(Airplane* airplane)
{
	airplanes.push_back(airplane);
}

void Airport::deleteAirplaneById(int id)
{
	std::list<Airplane*>::iterator it;
	for (it = airplanes.begin(); it != airplanes.end(); it++)
	{
		if ((*it)->getAirplaneId() == id)
		{
			airplanes.erase(it);
			break;
		}
	}
}

void Airport::viewFunctionalAirplanes(int id)
{
	std::list<Airplane*>::iterator it;
	for (it = airplanes.begin(); it != airplanes.end(); it++)
	{
		if ((*it)->getAirplaneId() == id)
		{
			(*it)->setIsFunctional(true);
			std::cout << std::endl << "Displonibility done " << endl;
			(*it)->print();
		}
	}
}

void Airport::viewUnfunctionalAirplanes(int id)
{
	std::list<Airplane*>::iterator it;
	for (it = airplanes.begin(); it != airplanes.end(); it++)
	{
		if ((*it)->getAirplaneId() == id)
		{
			(*it)->setIsFunctional(false);
			std::cout << std::endl << "Indisplonibility done " << endl;
			(*it)->print();
		};
	}
}
