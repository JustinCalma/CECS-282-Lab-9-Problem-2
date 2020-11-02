// Implementation File for class Time12

#include "Time12.h"
#include <iostream>
#include <string>
using namespace std;

// Function that will format the output to be 11:59 p.m.
void time12::display() const {
	
	// Output the hours to the user
	cout << hrs << ':';
	
	// If the mins value is less than 10 then output 0
	if (mins < 10) {
	
		// Extra zero for "01"
		cout << '0'; 
	}
	
	// Output the minutes value to the user
	cout << mins << ' ';
	
	// Determine if it is PM or AM
	string am_pm = pm ? "p.m." : "a.m.";
	
	// Output to the user if the current time is PM or AM
	cout << am_pm;
	
}
