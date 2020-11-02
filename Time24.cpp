// Implementation File for class Time24

#include "Time24.h"
#include <iostream>
#include <string>
using namespace std;

// Function that will format the output to be 23:15:01 
void time24::display() const {
	
	// If the hours value is less than 10, then output 0
	if (hours < 10) {
		cout << '0';	
	} 
	
	// Output the hours value
	cout << hours << ':';
	
	// If the minutes value is less than 10, then output 0
	if(minutes < 10) {
		cout << '0';	
	} 
	
	// Output the minutes value
	cout << minutes << ':';
	
	// If the seconds value is less than 10, then output 0
	if(seconds < 10) {
		cout << '0';	
	}
	
	// Output the seconds to the user
	cout << seconds;
	
}

// Operator Function that will convert a Time24 object to Time12 (Routine in Source)
time24::operator time12() {
	
	// Create variables that will store the values of the Time12 object
	bool pm;
	int hrs;
	int mins;
	
	// Check if the time is AM or PM
	if (hours >= 12) {
		
		// Set the time to be PM
		pm = true;
		
	// Else, the time is AM
	} else {
	
		pm = false;	
	
	}
	
	// Convert military time hours to standard time
	// If the time is PM
	if (pm == true) {
		
		// Subtract 12 from hours
		hrs = hours - 12;
		
		// If hrs is 0 then that means it is 12 PM
		if (hrs == 0) {
			
			hrs = 12;
			
		}
	
	// Else if, the hours is 00 (midnight)	
	} else if (hours == 0) {
		
		// Set hrs to be 12
		hrs = 12;
		
	// If the time is AM
	} else {
		
		// Subtract 12 from hours, then add 12 to not be a neg value
		hrs = hours - 12 + 12;
		
	}
	
	// Set the mins to be the minutes of Time24
	mins = minutes;
	
	// Return an object of type Time12
	return time12(pm, hrs, mins);
	
}
