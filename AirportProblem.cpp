/*#include <iostream>
#include "Airplane.hpp"
#include "Airport.hpp"

int main()
{
	bool disp;
	int option, isDisponible, idDelelete, km, id, number;
	std::string color;
	Airplane *a1, *a2, *cargoAirplane1, *cargoAirplane2, *passengerAirplane1, *passengerAirplane2;
	Airport* airport = new Airport();
	
	cargoAirplane1 = new CargoAirplane(new Wings(true), new Engines(0), new Body(1), "white");
	cargoAirplane2 = new CargoAirplane(new Wings(false), new Engines(0), new Body(19), "red");
	passengerAirplane1 = new PassengerAirplane(new Wings(true), new Engines(0), new Body(3), 64);
	passengerAirplane2 = new PassengerAirplane(new Wings(false), new Engines(0), new Body(7), 60);

	airport->addAirplane(cargoAirplane1);
	airport->addAirplane(cargoAirplane2);
	airport->addAirplane(passengerAirplane1);
	airport->addAirplane(passengerAirplane2);
	
	std::cout << "Meniu\n";

	while (1) {
		std::cout << "1) Show airplanes\n";
		std::cout << "2) Add CargoAirplane\n";
		std::cout << "3) Add PassengerAirplane\n";
		std::cout << "4) Delete airplane by id\n";
		std::cout << "5) Airplane disponibility\n";
		std::cout << "6) Airplane indisponibility\n";
		std::cout << "7) Iesire\n";
		std::cout << std::endl;

		std::cout << "Option: ";
		std::cin >> option;
		std::cout << std::endl;

		switch (option)
		{
		case 1:
			airport->viewAirplanes();
			break;
		case 2:
			std::cout << "\n Is the airplane functional? ";
			std::cin >> isDisponible;
			std::cout << "\n Give the number of km: ";
			std::cin >> km;
			std::cout << "\n Give the airplane's id: ";
			std::cin >> id;
			std::cout << "\n Give the airplane's color: ";
			std::cin >> color;
			if (isDisponible == 1)
				disp = true;
			else
				disp = false;
			a1 = new CargoAirplane(new Wings(disp), new Engines(km), new Body(id), color);
			airport->addAirplane(a1);
			airport->viewAirplanes();
			break;
		case 3:
			std::cout << "\n Is the airplane functional? ";
			std::cin >> isDisponible;
			std::cout << "\n Give the number of km: ";
			std::cin >> km;
			std::cout << "\n Give the airplane's id: ";
			std::cin >> id;
			std::cout << "\n Give the number of passengers: ";
			std::cin >> number;
			if (isDisponible == 1)
				disp = true;
			else
				disp = false;
			a2 = new PassengerAirplane(new Wings(disp), new Engines(km), new Body(id), number);
			airport->addAirplane(a2);
			airport->viewAirplanes();
			break;
		case 4:
			std::cout << "Give the airplane's id you want to delete: ";
			std::cin >> idDelelete;
			airport->deleteAirplaneById(idDelelete);
			airport->viewAirplanes();
			break;
		case 5:
			std::cout << "Give the id of the airplane you want to make disponible: ";
			std::cin >> id;
			airport->viewFunctionalAirplanes(id);
			break;
		case 6:
			std::cout << "Give the id of the airplane you want to make indisponible: ";
			std::cin >> id;
			airport->viewUnfunctionalAirplanes(id);
			break;
		case 7: exit(1);
			break;
		default: exit(1);
		}

	}
	return 0;
}
*/