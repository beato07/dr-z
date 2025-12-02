#include "drz.h"

#include <iostream>
#include <iomanip>
#include <string>
#include <random>

int getRandomDigit()
{
	static std::random_device rd;
	static std::uniform_int_distribution<int> dist(0, 9);

	return dist(rd);
}

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

	do
	{
		int Z = getRandomDigit();

		if (U == Z) { Z = getRandomDigit(); }
		if (V == Z) { Z = getRandomDigit(); }

		switch (Z + 1)
		{
		case 1:
			std::cout << "THAT'S VERY INTERESTING, TELL ME MORE.\n\n";
			std::cout << "? ", std::getline(std::cin, A), std::cout << "\n\n";
			break;
		case 2:
			std::cout << "HAVE YOU FELT THIS WAY LONG?\n\n";
			std::cout << "? ", std::getline(std::cin, A), std::cout << "\n\n";
			break;
		case 3:
			std::cout << "DO YOU THINK THIS IS REASONABLE IN LIGHT OF YOUR INTERESTS?\n\n";
			std::cout << "? ", std::getline(std::cin, A), std::cout << "\n\n";
			break;
		case 4:
			std::cout << "DO YOUR FRIENDS FIND THIS ACCEPTABLE?\n\n";
			std::cout << "? ", std::getline(std::cin, A), std::cout << "\n\n";
			break;
		case 5:
			std::cout << "DO YOU FEEL COMFORTABLE WITH THIS FEELING?\n\n";
			std::cout << "? ", std::getline(std::cin, A), std::cout << "\n\n";
			break;
		case 6:
			std::cout << "DO YOU THINK THAT THIS IS A NORMAL FEELING?\n\n";
			std::cout << "? ", std::getline(std::cin, A), std::cout << "\n\n";
			break;
		case 7:
			std::cout << "WHY DO YOU THINK YOU FEEL THIS WAY?\n\n";
			std::cout << "? ", std::getline(std::cin, A), std::cout << "\n\n";
			break;
		case 8:
			std::cout << "HAVE YOU TALKED TO ANYONE ABOUT THIS?\n\n";
			std::cout << "? ", std::getline(std::cin, A), std::cout << "\n\n";
			break;
		case 9:
			std::cout << "WHY ARE YOU HERE?\n\n";
			std::cout << "? ", std::getline(std::cin, A), std::cout << "\n\n";
			break;
		case 10:
			std::cout << "ARE YOU SATISFIED WITH THE WAY YOUR IDEAS ARE DEVELOPING?\n\n";
			std::cout << "? ", std::getline(std::cin, A), std::cout << "\n\n";
			break;
		}

		U = Z;

	} while (++C != 10);

	std::cout << "I THINK YOU ARE MAKING A GREAT ATTEMPT TO SOLVE YOUR\n";
	std::cout << "DIFFICULTIES, AND I SEE NO NEED TO CONTINUE THIS\n";
	std::cout << "SESSION ANY FURTHER.\n";

	std::cout << B
			  << " WOULD YOU MAKE ANOTHER APPOINTMENT WITH MY COMPUTER\n"
			  << "FOR SOMETIME IN THE NEXT FEW WEEKS. WHAT DATE WOULD YOU\n"
			  << "PREFER?\n";

	std::cout << "? ", std::getline(std::cin, A);

	std::cout << "THAT WILL BE FINE .\n";
	std::cout << "I'VE ENJOYED COMMUNICATING WITH YOU.\n";
	std::cout << "HAVE A NICE DAY.";
	std::cout << std::string(5, '\n');
}