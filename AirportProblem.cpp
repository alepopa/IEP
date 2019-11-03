/*#include <iostream>
#include "Airplane.hpp"
#include "Airport.hpp"

int main()
{
	int optiune, idDelelete;
	Airport airport = Airport();
	CargoAirplane airplane1 = CargoAirplane(Wings(0), Engines(0), Body(1), "white");
	PassengerAirplane airplane2 = PassengerAirplane(Wings(1), Engines(0), Body(7), 60);
	PassengerAirplane airplane3 = PassengerAirplane(Wings(0), Engines(0), Body(3), 64);
	CargoAirplane airplane4 = CargoAirplane(Wings(1), Engines(0), Body(19), "red");
	airport.airplanes.push_back(airplane1);
	airport.airplanes.push_back(airplane2);
	airport.airplanes.push_back(airplane3);
	airport.airplanes.push_back(airplane4);

	std::cout << "Meniu\n";

	while (1) {
		std::cout << "1) Vizualizare avioane\n";
		std::cout << "2) Adaugare avion marfa\n";
		std::cout << "3) Adaugare avion pasageri\n";
		std::cout << "4) Stergere avion dupa id\n";
		std::cout << "5) Disponibilate avion\n";
		std::cout << "6) Indisponibilate avion\n";
		std::cout << "7) Iesire\n";
		std::cout << std::endl;

		std::cout << "Optiunea: ";
		std::cin >> optiune;
		std::cout << std::endl;

		switch (optiune)
		{
		case 1:
			airport.viewAirplanes();
			break;
		case 2:
			airport.addCargoAirplane();
			airport.viewAirplanes();
			break;
		case 3:
			airport.addPassengerAirplane();
			airport.viewAirplanes();
			break;
		case 4:
			std::cout << "Give the airplane's id you want to delete: ";
			std::cin >> idDelelete;
			airport.deleteAirplaneById(idDelelete);
			airport.viewAirplanes();
			break;
		case 5:
			airport.viewFunctionalAirplanes();
			break;
		case 6:
			airport.viewUnfunctionalAirplanes();
			break;
		case 7: exit(1);
			break;
		default: exit(1);
		}

	}
	return 0;
}
*/