#include "Airplane.hpp"

Company::Company(){}

Company::~Company() {};

void Company::viewComponents()
{
	std::list<Component*>::iterator it;
	for (it = components.begin(); it != components.end(); it++) 
	{
		(*it)->list();
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void Company::viewAirplanes()
{
	std::list<Airplane*>::iterator it;
	for (auto it = airplanes.begin(); it != airplanes.end(); it++) 
	{
		(*it)->print();
	}
	std::cout << std::endl;
}

void Company::addComponent(Component* component)
{
	components.push_back(component);
}



void Company::createCargoAirplane(Wings *w, Engines *e, Body *b, std::string color) {
	CargoAirplane *a = new CargoAirplane(w, e, b, color);
	airplanes.push_back(a);
}

void Company::createPassengerAirplane(Wings *w, Engines *e, Body *b, int noPassengers) {
	PassengerAirplane *a = new PassengerAirplane(w, e, b, noPassengers);
	airplanes.push_back(a);
}

Component::Component() {}

Component::~Component(){}

void Component::list() {
	std::cout << "Component: ";
}

int Wings::countWings = 0;

Wings::Wings() {}

Wings::~Wings() {}

Wings::Wings(bool f)
{
	isFunctional = f;
	countWings++;
}

void Wings::setIsFunctional(bool f)
{
	isFunctional = f;
}

void Wings::fly()
{
	if (isFunctional)
		cout << "The airplane is functional";
	else
		cout << "The airplane isn't functional";
}

void Wings::list()
{
	Component::list();
	std::cout << "Wings - ";
	fly();
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

void Engines::list()
{
	Component::list();
	std::cout << "Engine - " << getFlownKilometers();
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

void Body::list()
{
	Component::list();
	std::cout << "Body - " << getId();
}

Airplane::Airplane() {}

Airplane::Airplane(Wings *w, Engines *e, Body *b)
{
	wings = w;
	engines = e;
	body = b;
}

Airplane::~Airplane() {}

int Airplane::getAirplaneId()
{
	return body->getId();
}

void Airplane::setIsFunctional(bool value) {
	wings->setIsFunctional(value);
}

void Airplane::print()
{
	std::cout << "Airplane, ID = " << this->getAirplaneId();
}

CargoAirplane::~CargoAirplane() {}

CargoAirplane::CargoAirplane() {}

CargoAirplane::CargoAirplane(Wings *w, Engines *e, Body *b, string c) : Airplane(w, e, b)
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

void CargoAirplane::print()
{
	Airplane::print();
	std::cout << ", Color: " <<getColor() << std::endl;
}

PassengerAirplane::PassengerAirplane() {}

PassengerAirplane::~PassengerAirplane() {}

PassengerAirplane::PassengerAirplane(Wings *w, Engines *e, Body *b, int n) : Airplane(w, e, b)
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

void PassengerAirplane::print()
{
	Airplane::print();
	std::cout << ", Number of passengers: " << this->getNoPassengers() << std::endl;
}