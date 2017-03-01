/*
 * slist.h
 *
 *  Created on: Feb 3, 2017
 *      Author: fyounis
 */

#ifndef SLIST_H_
#define SLIST_H_
#include "Student.h"



class slist {
public:
	slist ();
	slist( int);//Constructor
	slist(const slist&);//Copy Constructor
	~slist(); //Destructor
	void addStudentToTheList(const Student&);
	void listStudentsName() const;
	bool searchById(int);
	bool searchByName(char*);



private:
	 int LIST_SIZE = 150; // the maximum items in the list
	 Student *items; // items will point to the dynamically allocated array
	 int numItems; // the number of items currently in the list
};



#endif /* SLIST_H_ */
