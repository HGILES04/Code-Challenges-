#include <iostream>
#include <vector>

bool quit() {
	std::cout << "Good-Bye \n";
	return false;
}

std::vector <int> addNumber(std::vector<int> numbers) {
	//Add Number to the Vector
	std::cout << "Enter an integer to add to the list: \n";
	int numberAdded;
	std::cin >> numberAdded;
	numbers.push_back(numberAdded);
	std::cout << numberAdded << " added \n";
	return numbers;
	}

void print (std::vector<int> numbers) {
std::cout << "\n";
std::cout << "The vector elements are: ";

    for(int i = 0; i < numbers.size(); i++)
        std::cout << numbers.at(i) << ' ';
		std::cout << "\n";
}

void mean (std::vector<int> numbers) {
	
	float average = 0;
	float sumTotal = 0;
	
	//for(int i = 0; i < numbers.size(); i++) 
		
		for(auto number:numbers) {
			sumTotal = sumTotal + number;

	}
	average = sumTotal / numbers.size();
	std::cout << average << std::endl;
}

void large (std::vector<int> numbers) {
	
	int largestElement = 0;
	
	for(int i = 0; i < numbers.size(); i++) 
		if (numbers[i] > largestElement) 
		{
		largestElement = numbers[i];
		}
	std::cout << largestElement << std::endl;
		
}

void small (std::vector<int> numbers) {
	
	int smallestElement = 100000;
	
	for(int i = 0; i < numbers.size(); i++) 
		if (numbers[i] < smallestElement) 
		{
		smallestElement = numbers[i];
		}
	std::cout << smallestElement << std::endl;
		
}

int main() {
	
    bool run = true;
    std::vector<int> numbers = {};

	do{
        std::cout << "\n";
        std::cout << "P - Print Numbers\n";
        std::cout << "A - Add number \n";
        std::cout << "M - Display mean of the numbers \n";
        std::cout << "S - Display the smallest numbers \n";
        std::cout << "L - Display the largest numbers \n";
        std::cout << "Q - Quit \n";
        std::cout << "\n";
		
		char userInput;
		std::cout << "Enter your choice: \n";
		std::cin >> userInput;

		switch (userInput) {
			case 'p':
			case 'P':
				print(numbers);
				break;
			case 'a':
			case 'A':
				numbers = addNumber(numbers);
				break;
			case 'm':
			case 'M':
				mean(numbers);
				break;
			case 's':
			case 'S':
				small(numbers);
				break;
			case 'l':
			case 'L':
				large(numbers);
				break;
			case 'q':
			case 'Q':
				run = quit();
				break;
			default:
				std::cout << "Try Again \n";
		}
	} while(run == true);
	
	return 0;
}




