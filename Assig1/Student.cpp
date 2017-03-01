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

//Default constructor
Student::Student(){
	fname = "";
	lname = "";
	id = 0;

}

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

}

// accessing student ID
int Student::getID(){
	return id;
}

//accessing student name
char* Student::getName(){
	return fname;
}


//Destructor
Student::~Student() {
// Clean up memory
	delete [] fname ;
	delete [] lname ;
	cout<< "Destructor was called"<<endl;
}

