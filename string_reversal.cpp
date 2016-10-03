/*
Practice program 1
objective: Take a user input string, reverse order of the string and return it
NOTE: must use separate header file for reverse function
Practice program 2
objective: Take a user input string and add spaces to "tokenize" the string
*/

#include <iostream>
#include <string>
#include "myStringManip.h"

/*
	Problem 1:
	std::string input;
	std::cin >> input;
	Above revealed that cin extraction treats whitespace/tabs/newlines as terminating the value.
	Therefore, above will only extract a single word from the input stream.
	solution: use getline(cin,input)
*/


int main(){
	std::cout << "Program Start" << std::endl;
	std::cout << "Please enter a string terminated with enter: ";
	std::string input;
	//std::cin >> input;  Problem 1
	std::getline(std::cin,input);
	std::cout << "length of input = " << input.size() << std::endl;
	if(input.size() == 0){
		std::cout << "ERROR: null input" << std::endl;
		return 1;
	}
	std::cout << "User input = " << input << std::endl;
	std::cout << "Reversing user input" << std::endl;
	std::string output = myReverse(input);							//problem 1
	std::cout << "Reversed user input = " << output << std::endl;
	std::cout << "Inserting spaces" << std::endl;
	std::string output2 = addSpaces(output);						//problem 2
	std::cout << "Spaced version of string: " << output2 << std::endl;
	
	
}