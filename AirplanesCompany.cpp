#include <iostream>
#include "Airplane.hpp"
#include "Airport.hpp"

int main()
{
	Company c = Company();
	Wings wings1 = Wings(0);
	Wings wings2 = Wings(1);
	Wings wings3 = Wings(3);
	std::cout <<"Number of wings: " << Wings::countWings << std::endl;
	c.components.push_back(wings1);
	c.components.push_back(wings2);
	c.components.push_back(wings3);

	Engines engines1 = Engines(1000);
	Engines engines2 = Engines(3000);
	Engines engines3 = Engines(5000);
	std::cout << "Number of engines: " << Engines::countEngines << std::endl;
	c.components.push_back(engines1);
	c.components.push_back(engines2);
	c.components.push_back(engines3);
	
	Body body1 = Body(1);
	Body body2 = Body(2);
	Body body3 = Body(3);
	std::cout << "Number of bodies: " << Body::countBodies << std::endl;
	c.components.push_back(body1);
	c.components.push_back(body2);
	c.components.push_back(body3);

	std::cout << "View components: " << std::endl;
	c.viewComponents();

	c.createCargoAirplane(wings1, engines1, body2, "white");
	c.createPassengerAirplane(wings2, engines2, body1, 60);
	c.createCargoAirplane(wings3, engines3, body3, "white");

	std::cout << "View created airplanes: " << std::endl;
	c.viewAirplanes();

	return 0;
}