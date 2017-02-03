/*
 * slist.h
 *
 *  Created on: Feb 3, 2017
 *      Author: fyounis
 */

#ifndef SLIST_H_
#define SLIST_H_
#include "Student.h"

namespace std {

class slist {
public:
	slist(size_t);//Constructor
	slist(const slist&);//Copy Constructor
	~slist(); //Destructor
	void addtoend(Student, size_t);
	void printlist(ostream &output) const;
	bool check(int);
	bool check(char*);



private:
	 static const size_t LIST_SIZE = 150; // the maximum items in the list
	 Student *items; // items will point to the dynamically allocated array
	 size_t numItems; // the number of items currently in the list
};

} /* namespace std */

#endif /* SLIST_H_ */
