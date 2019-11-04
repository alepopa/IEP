#include <iostream>
#include "Airplane.hpp"
#include "Airport.hpp"

int main()
{
	Company *c = new Company();
	Wings *wings1 = new Wings(0);
	Wings *wings2 = new Wings(1);
	Wings *wings3 = new Wings(3);
	std::cout <<"Number of wings: " << Wings::countWings << std::endl;
	c->addComponent(wings1);
	c->addComponent(wings2);
	c->addComponent(wings3);

	Engines *engines1 = new Engines(1000);
	Engines *engines2 = new Engines(3000);
	Engines *engines3 = new Engines(5000);
	std::cout << "Number of engines: " << Engines::countEngines << std::endl;
	c->addComponent(engines1);
	c->addComponent(engines2);
	c->addComponent(engines3);
	
	Body *body1 = new Body(1);
	Body *body2 = new Body(2);
	Body *body3 = new Body(3);
	std::cout << "Number of bodies: " << Body::countBodies << std::endl;
	c->addComponent(body1);
	c->addComponent(body2);
	c->addComponent(body3);

	std::cout << "View components: " << std::endl;
	c->viewComponents();
	
	c->createCargoAirplane(wings1, engines1, body2, "white");
	c->createPassengerAirplane(wings2, engines2, body1, 60);
	c->createCargoAirplane(wings3, engines3, body3, "white");

	std::cout << "View created airplanes: " << std::endl;
	c->viewAirplanes();

	return 0;
}