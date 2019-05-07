#include <iostream>

int main() {
	std::cout <<"Hello world";

	int mynum = 2;
	int &myNumRef = mynum;
	std::cout << "myNumber's reference's value is " << myNumRef <<std::endl;
	std::cout << "myNumber's reference's address is  " << &myNumRef << std::endl;

	int * mynumpointer = &myNumRef;
	std::cout << "a pointer pointer to my num. Its address is " << mynumpointer << std::endl;
	std::cout << "a pointer pointer to my num. Its value is " << *mynumpointer << std::endl;
	return 0;
}