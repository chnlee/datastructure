#include <iostream>
#include "reverse.h"

using namespace std;

// DO NOT CHANGE THE MAIN FUNCTION
int main() {
	int input, output;  // Variables for input and output 
	
	cout << "Please enter a number to be reversed!\n";
	
	try{
		// Reverse an input number from the user, and print the result
		cin >> input;   
		output = reverse(input);  
		cout << "Reverse number is " << output << endl;
	} catch (const char* msg) {
		// Print out the error message (msg)
		cout << msg << endl; 
		return -1;
	}
	return 0;
}
