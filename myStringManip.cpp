
#include <string>
#include <iostream>

/*
	Problem 1
	while(revIndex>0){
	This was resulting in only the first and last char being swapped. This was
	due to not realizing that I only needed to reverse up through HALF of the
	length of the string.
	solution: while(fwdIndex < revIndex){
		
*/

std::string myReverse(std::string input){
	//string reversed;
	int revIndex = (input.size()-1);							//last index of string
	int fwdIndex = 0;											//current index in process
	while(fwdIndex < revIndex){
		char temp = input[revIndex];							//store final char
		input[revIndex] = input[fwdIndex];						//set back char as front char
		input[fwdIndex] = temp;									//update front char to temp
		revIndex--;
		fwdIndex++;
	}
	return input;
}

/*
	Problem 2
	insert requires a STRING, therefore giving it ' ' to insert wont work
	solution: input.insert(x+1, " "); so you're passing a string/const char
*/

std::string addSpaces(std::string input){
	for(int x = 0; x < input.size();x++){
		if(input[x] != ' '){
			input.insert(x+1," ");
		}
	}
	return input;
}

