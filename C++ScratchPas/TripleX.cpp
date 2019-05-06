#include <iostream>


int main() {	
	//Declare variables
	int currentLevel = 2;
	const int maxLevel = 10; // tell compiler never allow this value to be chnanged
	int playerInput;

	int num1 = 3;
	int num2 = 4;
	int num3 = 5;


	//print UI informations

	std::cout << "Solve this" << std::endl;
	std::cout << "enter the correct code to continue" << std::endl;

	std::cout << "Your current level  is" << currentLevel << std::endl;
	std::cout << "Your max level is " << maxLevel << std::endl;
	std::cout << "Three numbers adds up to " << num1 + num2 + num3 << std::endl;
	std::cout << "The product is " << num1 * num2 * num3 << std::endl;


	return 0;
}