#include <iostream>
#include <vector>

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
	
	for(int i = 0; i < numbers.size(); i++) 
		sumTotal = sumTotal + numbers[i];
	
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


int main()
{
    int i = 1;

    std::vector<int> numbers = { };

    while(i < 2) {

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
        userInput = toupper(userInput);


        if (userInput == 'P' ) {
        //Print Numbers
        print(numbers);

        }


        else if (userInput  == 'A') {
        //Add Number
            std::cout << "Enter an integer to add to the list: \n";
            int numberAdded;
            std::cin >> numberAdded;
            numbers.push_back(numberAdded);
            std::cout << numberAdded << " added \n";
            
        }
        else if (userInput == 'M') {
        //Display mean of the numbers
		mean(numbers);
		

        }
        else if (userInput == 'S') {
        //Display the smallest numbers
		small(numbers);
        }

        else if (userInput == 'L') {
        //Display the largest numbers
		large(numbers);

        }

        else if (userInput == 'Q') {
        //Quit
        ++i;
        std::cout << "quit \n";

        }

        else{
            std::cout << "Try Again \n";
        }

    }

    return 0;
}
