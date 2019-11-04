#pragma once
#ifndef AIRPLANE_HPP
#define AIRPLANE_HPP

#include <iostream>
#include <string>
#include <stdio.h>
#include <cstring>
#include <list>

using namespace std;

class Component 
{
public:
	Component();
	~Component();
	virtual void list();
};

class Wings : public Component
{
private:
	int isFunctional;
	

public:
	static int countWings;
	Wings(bool f);
	Wings();
	~Wings();
	void setIsFunctional(bool f);
	void fly();
	void list();
};

class Engines : public Component
{
private:
	int flownKilometers;

public:
	static int countEngines;
	Engines(int km);
	Engines();
	~Engines();
	void setFlownKilometers(int km);
	int getFlownKilometers();
	void list();
};

class Body : public Component
{
private:
	int id;

public:
	static int countBodies;
	Body(int i);
	Body();
	~Body();
	void setId(int i);
	int getId();
	void list();
};

class Airplane
{
private:
	Wings *wings;
	Engines *engines;
	Body *body;

public:
	Airplane();
	~Airplane();
	Airplane(Wings *w, Engines *e, Body *b);
	int getAirplaneId();
	void setIsFunctional(bool value);
	virtual void print();
};

class CargoAirplane : public Airplane
{
private:
	std::string color;

public:
	CargoAirplane();
	~CargoAirplane();
	CargoAirplane(Wings *w, Engines *e, Body *b, string c);
	void setColor(std::string c);
	std::string getColor();
	void print();
};

class PassengerAirplane : public Airplane
{
private:
	int noPassengers;

public:
	PassengerAirplane();
	~PassengerAirplane();
	PassengerAirplane(Wings *w, Engines *e, Body *b, int n);
	void setNoPassengers(int n);
	int getNoPassengers();
	void print();
};

class Company
{
public:
	list<Airplane *> airplanes;
	list<Component *> components;
	Company();
	~Company();
	void viewComponents();
	void viewAirplanes();
	void addComponent(Component* component);
	void createCargoAirplane(Wings *w, Engines *e, Body *b, std::string color);
	void createPassengerAirplane(Wings *w, Engines *e, Body *b, int noPassengers);
};

#endif // AIRPLANE_HPP