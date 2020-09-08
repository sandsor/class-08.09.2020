#include <iostream>
#include <string>
#include <conio.h>

int main()
{
	char option = ' ';
	bool flag = true;
	do { // can also use (do) then end it with (while(true)) at the end of }
		std::cout << "A. Save the game" << std::endl;
		std::cout << "B. Restart the game" << std::endl;
		std::cout << "C. Select difficulty" << std::endl;
		std::cout << "D. End the program" << std::endl;
		std::cout << "select an option : ";

		std::cin >> option;

		//	if (option == 'a' || option == 'A') {
		//		std::cout << "Saving ..." << std::endl;
		//	}
		//	else if (option == 'b' || option == 'B') {
		//		std::cout << "restarting the game ..." << std::endl;
		//	}
		//	else if (option == 'c' || option == 'C') {
		//		std::cout << "Please select difficulty (easy/hard)" << std::endl;
		//	}
		//	else if (option == 'd' || option == 'D') {
		//		break;
		//	}
		//	else {
		//		std::cout << "Invalid input ..." << std::endl;
		//	}
		//} 

		switch (option) {
		case 'A': case 'a':
			std::cout << "Saving ..." << std::endl;
			break;
		case 'B': case 'b':
			std::cout << "restarting the game ..." << std::endl;
			break;
		case 'C': case 'c':
			std::cout << "Please select difficulty (easy/hard)" << std::endl;
			break;
		case 'Q': case 'q':
			flag = false;
			break;
		default:
			std::cout << "Invalid input ..." << std::endl;
			 break;
		}

	} while (flag == true);
}