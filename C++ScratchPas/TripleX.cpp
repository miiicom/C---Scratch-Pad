#include <iostream>


int main() {	
	//Declare variables
	int currentLevel = 2;
	const int maxLevel = 10; // tell compiler never allow this value to be chnanged

	//print UI informations

	std::cout << "Solve this" << std::endl;
	std::cout << "enter the correct code to continue" << std::endl;

	std::cout << "Your current level add maxlevel is" << maxLevel + currentLevel << std::endl;
	std::cout << "currentLevel multiply by  PAI is" << currentLevel * 3.1415927 << std::endl;
	return 0;
}