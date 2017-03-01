/*
 * Student.h
 *
 *  Created on: Feb 2, 2017
 *      Author: fyounis
 */

#ifndef STUDENT_H_
#define STUDENT_H_

class Student {
	public:
		Student(); // defulte Constructor
		Student(char*, char*, int); //Constructor
		Student(const Student &); //Copy Constructor
		~Student(); //Desctructor
		char* getName(); // accessing function to get name
		int getID();// accessing function to get ID

	private:
		char* fname;
		char* lname;
		int id;
};

#endif /* STUDENT_H_ */
