/*
 * slist.cpp
 *
 *  Created on: Feb 3, 2017
 *      Author: fyounis
 */

#include "slist.h"
#include <list>
#include "Student.h"
#include <iostream>
using namespace std;


slist::slist(){
	items = new Student[LIST_SIZE];
	numItems = 0;
}

slist::slist(int a) {
	LIST_SIZE = a;
	items = new Student[LIST_SIZE];
	numItems = 0;

}

slist::slist(const slist & stud) {

	items = new Student[LIST_SIZE];
	numItems = stud.numItems;
	for (int i = 0; i < numItems; i++)
		items[i] = stud.items[i];
}

void slist::addStudentToTheList(const Student& s) {

	if (numItems < LIST_SIZE) {
		items[numItems] = s;
		numItems++;
	} else {
		cout << "Student List is FULL!!";
	}

}

//list all student First name
void slist::listStudentsName() const {
	for (int i = 0; i < numItems; i++){

		cout << items[i].getName() << endl;
	}

}

//search by ID
bool slist::searchById(int numid) {
	for (int i = 0; i < numItems; i++) {
		if (items[i].getID() == numid)
			return true;
	}
return false;

}
//seach by name
bool slist::searchByName(char* name) {
	for (int i = 0; i < numItems; i++) {
		if (items[i].getName() == name)
			return true;
	}
return false;

}

slist::~slist() {
delete[] items;
}

//display all Students names

