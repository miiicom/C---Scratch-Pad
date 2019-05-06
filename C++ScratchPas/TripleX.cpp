#include <iostream>
void printIntroduction() {
	std::cout << "Solve this" << std::endl;
	std::cout << "enter the correct code to continue" << std::endl;
}


bool playgame() {
	printIntroduction();
	//Declare variables
	
	int playerInput1, playerInput2, playerInput3;
	int playerGuessSum, playerGuessProduct;
	int numSum, numProduct;

	int num1 = 3;
	int num2 = 4;
	int num3 = 5;

	numSum = num1 + num2 + num3;
	numProduct = num1 * num2 *num3;

	//print UI informations

	std::cout << "Three numbers adds up to " << num1 + num2 + num3 << std::endl;
	std::cout << "The product is " << num1 * num2 * num3 << std::endl;

	std::cin >> playerInput1;
	std::cin >> playerInput2;
	std::cin >> playerInput3;
	std::cin.clear();
	std::cin.ignore();
	

	std::cout << "your input is " << playerInput1 << " and " << playerInput2 << " and " << playerInput3 << std::endl;
	playerGuessSum = playerInput1 + playerInput2 + playerInput3;
	playerGuessProduct = playerInput1 * playerInput2 * playerInput3;

	if (playerGuessSum == numSum && playerGuessProduct == numProduct) {
		std::cout << "the computer says: \"You made it\" \n";
		return true;
	}
	else {
		std::cout << "You died \n";
		return false;
	}

}



int main() {	
	int currentLevel = 2;
	const int maxLevel = 10; // tell compiler never allow this value to be chnanged
	while (currentLevel <= maxLevel) {
		
		if (playgame()) {
			std::cin.clear();
			std::cin.ignore();
			currentLevel += 1;
			std::cout << "next level! XDDDD \n";
		}else{
			return 0;
		}
	}

	return 0;
}