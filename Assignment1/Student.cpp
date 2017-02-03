/*
 * Student.cpp
 *
 *  Created on: Feb 2, 2017
 *      Author: fyounis
 */

#include "Student.h"
#include <cstring>
#include <iostream>
using std::cout;
using std::endl;


Student::Student(char* pF, char* pL, int idnum) {
	// TODO Auto-generated constructor stub
	id = idnum ;
	fname = new char[ strlen(pF)+1 ] ;
	lname = new char[ strlen(pL)+1 ] ;
	strcpy(fname, pF) ;
	strcpy(lname, pL) ;
	cout<< fname<<" " << lname<<" :" <<id<<'\n';
}

// Copy Constructor
Student::Student( const Student & stud )
{
	id = stud.id ;
	fname = new char[ strlen(stud.fname)+1 ] ;
	lname = new char[ strlen(stud.lname)+1 ] ;
	strcpy(fname, stud.fname) ;
	strcpy(lname, stud.lname) ;
	cout<< "Copy Constructor was called"<<'\n';
	cout<< fname<<" " << lname<<" :" <<id<<'\n';
}

//Destructor
Student::~Student() {
// Clean up memory
	delete [] fname ;
	delete [] lname ;
}

