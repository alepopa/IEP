#include "Airport.hpp"

Airport::Airport() {}

Airport::~Airport() {}

void Airport::viewAirplanes() // nu merge
{
	for (auto it = airplanes.begin(); it != airplanes.end(); it++) {
		(*it).print();
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void Airport::addCargoAirplane()
{
	int isFunctional, km, id;
	std::string color;
	std::cout << "\n Is the airplane functional? ";
	std::cin >> isFunctional;
	std::cout << "\n Give the number of km: ";
	std::cin >> km;
	std::cout << "\n Give the airplane's id: ";
	std::cin >> id;
	std::cout << "\n Give the airplane's color: ";
	std::cin >> color;
	CargoAirplane airplane(Wings(isFunctional), Engines(km), Body(id), color);
	airplanes.push_back(airplane);
}

void Airport::addPassengerAirplane()
{
	int isFunctional, km, id, number;
	std::cout << "\n Is the airplane functional? ";
	std::cin >> isFunctional;
	std::cout << "\n Give the number of km: ";
	std::cin >> km;
	std::cout << "\n Give the airplane's id: ";
	std::cin >> id;
	std::cout << "\n Give the number of passengers: ";
	std::cin >> number;
	PassengerAirplane airplane(Wings(isFunctional), Engines(km), Body(id), number);
	airplanes.push_back(airplane);
}

void Airport::deleteAirplaneById(int id)
{
	int found = 0;
	for (auto i = airplanes.begin(); i != airplanes.end();)
		if ((*i).getAirplaneId() == id) {
			i = airplanes.erase(i);
			found = 1;
		}
		else
			i++;
	if (!found)
		cout << "The airplane with this id does not exist!" << endl;
	cout << endl;
}

void Airport::viewFunctionalAirplanes()
{
	std::cout << "Functional airplanes: " << std::endl;
	for (auto it = airplanes.begin(); it != airplanes.end(); it++) {
		if ((*it).getFunctionality() == 1) {
			(*it).print();
			std::cout << std::endl;
		}
	}
	std::cout << std::endl;
}

void Airport::viewUnfunctionalAirplanes()
{
	std::cout << "Unfunctional airplanes: " << std::endl;
	for (auto it = airplanes.begin(); it != airplanes.end(); it++) {
		if ((*it).getFunctionality() == 0) {
			(*it).print();
			std::cout << std::endl;
		}
	}
	std::cout << std::endl;
}
