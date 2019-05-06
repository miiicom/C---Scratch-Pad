#include <iostream>
#include <ctime>
void printIntroduction( int difficulty) {
	std::cout << "Solve this in difficulty : " << difficulty<< std::endl;
	std::cout << "enter the correct code to continue" << std::endl;
}


bool playgame(int diffuculty) {
	printIntroduction(diffuculty);
	//Declare variables
	
	int playerInput1, playerInput2, playerInput3;
	int playerGuessSum, playerGuessProduct;
	int numSum, numProduct;

	int num1 = rand() % diffuculty + diffuculty;
	int num2 = rand() % diffuculty + diffuculty;
	int num3 = rand() % diffuculty + diffuculty;

	numSum = num1 + num2 + num3;
	numProduct = num1 * num2 *num3;

	//print UI informations

	std::cout << "Three numbers adds up to " << num1 + num2 + num3 << std::endl;
	std::cout << "The product is " << num1 * num2 * num3 << std::endl;

	std::cin >> playerInput1;
	std::cin >> playerInput2;
	std::cin >> playerInput3;
	

	std::cout << "your input is " << playerInput1 << " and " << playerInput2 << " and " << playerInput3 << std::endl;
	playerGuessSum = playerInput1 + playerInput2 + playerInput3;
	playerGuessProduct = playerInput1 * playerInput2 * playerInput3;

	if (playerGuessSum == numSum && playerGuessProduct == numProduct) {
		std::cout << "the computer says: \"You made it\" \n";
		return true;
	}
	else {
		std::cout << "You died \n Go retry the game:) \n";
		return false;
	}

}



int main() {	
	srand(time(NULL));
	int currentLevel = 1;
	const int maxLevel = 10; // tell compiler never allow this value to be chnanged
	while (currentLevel <= maxLevel) {
		
		if (playgame(currentLevel)) {
			std::cin.clear();
			std::cin.ignore();
			currentLevel += 1;
			std::cout << "next level! XDDDD \n";
		}else{
			
		}
	}
	std::cout << "You have completed the game!\n";

	return 0;
}