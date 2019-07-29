#include "UserInterface.h"



void UserInterface::displayMainMenu()
{
	// Display menu options
	std::cout << "Hello Main Menu" << std::endl;

	// Recieve user input
	int input;
	std::cin >> input;
	// Call corresponding fuction
	switch (input) {
	case 1:
		std::cout << "Opt 1" << std::endl;
		break;
	default:
		break;
	}

}

UserInterface::UserInterface()
{
}


UserInterface::~UserInterface()
{
}

void UserInterface::launch()
{
	// Main loop
	while (1) {
		displayMainMenu();
		while (1) {};
	}
}
