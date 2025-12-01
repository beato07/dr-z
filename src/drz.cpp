#include "drz.h"

#include <iostream>
#include <iomanip>
#include <string>

void launchGame()
{
	std::cout << std::setw(31) << "DR.Z\n";
	std::cout << std::setw(38) << "CREATIVE COMPUTING\n";
	std::cout << std::setw(40) << "MORRISTOWN, NEW JERSEY";
	std::cout << std::string(4, '\n');

	std::cout << "HELLO THERE, I'M YOUR COMPUTER THERAPIST.\n";
	std::cout << "WHAT IS YOUR NAME? AND TELL ME SOMETHING ABOUT YOURSELF.\n";
	std::cout << "HOWEVER, DON'T TYPE MORE THAN ONE LINE. I TIRE EASILY.\n";

	std::string A, B;
	std::cout << "? ", std::getline(std::cin, A);
	std::cout << "WHAT DID YOU SAY YOUR NAME WAS AGAIN?\n";
	std::cout << "? ", std::getline(std::cin, B);

	std::cout << "HOW DO YOU FEEL TODAY?\n";

	int C = 0, U = 0, V = 0;
	std::cout << "? ", std::getline(std::cin, A), std::cout << "\n\n";
}