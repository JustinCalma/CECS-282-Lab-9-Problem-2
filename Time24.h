// Header File for class Time24

#ifndef TIME24_H
#define TIME24_H

#include "Time12.h"
#include <iostream>
#include <string>
using namespace std;

// Create a class called time24
class time24 {
	
	// Declare the private attributes of the class 
	private:
		
		// 0 to 23
		int hours; 
		
		// 0 to 59
		int minutes;
		
		// 0 to 59 
		int seconds; 
		
	// Declare the public functions and constructors of the class
	public: 
	
		// Default / No - argument constructor
		time24() : hours(0), minutes(0), seconds(0) { }
		
		// 3 - argument constructor
		time24(int h, int m, int s) : hours(h), minutes(m), seconds(s) { }
		
		// Function that will format the output to be 23:15:01 
		void display() const;
		
		// Operator Function that will convert a Time24 object to Time12 (Routine in Source)
		operator time12();
			
};

#endif
