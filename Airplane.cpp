#include "Airplane.hpp"

Company::Company(){}

Company::~Company() {};

void Company::viewComponents()
{
	for (auto it = components.begin(); it != components.end(); it++) {
		(*it).list();
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void Company::viewAirplanes()
{
	for (auto it = airplanes.begin(); it != airplanes.end(); it++) {
		(*it).print();
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void Company::createCargoAirplane(Wings w, Engines e, Body b, std::string color) {
	CargoAirplane a = CargoAirplane(w, e, b, color);
	airplanes.push_back(a);
}

void Company::createPassengerAirplane(Wings w, Engines e, Body b, int noPassengers) {
	PassengerAirplane a = PassengerAirplane(w, e, b, noPassengers);
	airplanes.push_back(a);
}

Component::Component() {}

Component::~Component(){}

void Component::list() { // afiseaza doar asta
	std::cout << "Component " << std::endl;
}

int Wings::countWings = 0;

Wings::Wings() {}

Wings::~Wings() {}

Wings::Wings(int f)
{
	isFunctional = f;
	countWings++;
}

void Wings::setIsFunctional(int f)
{
	isFunctional = f;
}

int Wings::fly()
{
	return isFunctional;
}

void Wings::list() // nu ajunge aici
{

	std::cout << "Wings " << fly() << std::endl;
	Component::list();
}

int Engines::countEngines = 0;

Engines::Engines() {}

Engines::~Engines() {}

Engines::Engines(int km)
{
	flownKilometers = km;
	countEngines++;
}

void Engines::setFlownKilometers(int km)
{
	flownKilometers = km;
}

int Engines::getFlownKilometers()
{
	return flownKilometers;
}

void Engines::list() // nu ajunge aici
{
	std::cout << "Engine " << getFlownKilometers() << std::endl;
	Component::list();
}

int Body::countBodies = 0;

Body::Body() {}

Body::~Body() {}

Body::Body(int i)
{
	id = i;
	countBodies++;
}

void Body::setId(int i)
{
	id = i;
}

int Body::getId()
{
	return id;
}

void Body::list() // nu ajunge aici
{
	std::cout << "Body " << getId() << std::endl;
	Component::list();
}

Airplane::Airplane() {}

Airplane::Airplane(Wings w, Engines e, Body b)
{
	wings = w;
	engines = e;
	body = b;
}

Airplane::~Airplane() {}

int Airplane::getAirplaneId()
{
	return body.getId();
}

int Airplane::getFunctionality()
{
	return wings.fly();
}

void Airplane::print() // afiseaza doar asta
{
	std::cout << "Airplane, ID = " << this->getAirplaneId() << std::endl;
}

CargoAirplane::~CargoAirplane() {}

CargoAirplane::CargoAirplane() {}

CargoAirplane::CargoAirplane(Wings w, Engines e, Body b, string c) : Airplane(w, e, b)
{
	color = c;
}

void CargoAirplane::setColor(string c)
{
	color = c;
}

std::string CargoAirplane::getColor()
{
	return color;
}

void CargoAirplane::print() // nu ajunge aici
{
	std::cout << " Color: " <<getColor() << std::endl;
	Airplane::print();
}

PassengerAirplane::PassengerAirplane() {}

PassengerAirplane::~PassengerAirplane() {}

PassengerAirplane::PassengerAirplane(Wings w, Engines e, Body b, int n) : Airplane(w, e, b)
{
	noPassengers = n;
}

void PassengerAirplane::setNoPassengers(int n)
{
	noPassengers = n;
}

int PassengerAirplane::getNoPassengers()
{
	return noPassengers;
}

void PassengerAirplane::print() // nu ajunge aici
{
	std::cout << " Number of passengers: " << this->getNoPassengers() << std::endl;
	Airplane::print();
}