//Gullible

#include <iostream>;


int main() {
	
	int input = 0;
	int i = 0;
	
	while (input != 5) {
		std::cout << "Please enter a number other then 5\n";
		std::cin >> input;
		std::cout << "\n\n";
		i++;
		if (i == 10) {
			break;
		}
	}
	
	if (input == 5) {
		std::cout << "Hey you  weren't supposed to enter 5";
		return 0;
	}

	if (i == 10) {
		std::cout << "Wow, you're more patient then I am, you win.";
	}


	return 0;
}