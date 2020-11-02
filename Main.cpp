// Driver File for the program

#include "Time12.h"
#include "Time24.h"
#include <iostream>
#include <string>
using namespace std;

// Main function for the program
int main() {
	
	// Declare the variables that will store user inpur 
	int h, m, s;

	// Keep running until the user inputs an invalid Hour value
	while(true) { 
	
		// Get 24-hr time from user
		cout << "Enter 24-hour time: \n";
		cout << " Hours (0 to 23): "; 
		cin >> h;
		
		// If the inputted hours value is greater than 23, quit the program
		if(h > 23) { 
			return(1);
		}
		
		// Prompt the user to input the minutes and seconds
		cout << " Minutes: "; 
		cin >> m;
		cout << " Seconds: "; 
		cin >> s;
		
		// Create a time24 object with the inputted values
		time24 t24(h, m, s); 
		
		// Display the time24 object and it's values to the user
		cout << "You entered: "; 
		t24.display();
		
		// Convert time24 to time12
		time12 t12;
		t12 = t24; 
		
		// Display time12 object which is the equivalent to time24
		cout << "\n12-hour time: "; 
		t12.display();
		cout << "\n\n";
		
	}
	
	// Return 0 to main
	return 0;
	
}
