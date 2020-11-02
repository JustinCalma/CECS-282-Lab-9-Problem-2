// Header file for class Time12

#ifndef TIME12_H
#define TIME12_H

#include <iostream>
#include <string>
using namespace std;

// Create a class called time12
class time12 {
	
	// Declare the private attributes of the class 
	private:
		
		// True = pm, false = am
		bool pm; 
		
		// 1 to 12
		int hrs; 
		
		// 0 to 59
		int mins; 
		
	// Declare the public constructors and functions of the class 
	public: 
	
		// Default / No - argument Constructor
		time12() : pm(true), hrs(0), mins(0) { }
		
		// 3 - argument Constructor
		time12(bool ap, int h, int m) : pm(ap), hrs(h), mins(m) { }
		
		// Function that will format the output to be 11:59 p.m.
		void display() const;
			
};

#endif
