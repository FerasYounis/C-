#include "slist.h"
#include <list>
#include "Student.h"
#include <iostream>
using namespace std;


int main ()

{

		Student s1("John", "Young" , 1234567) ;
		Student s2("Jams", "Mark", 555555);
		Student s3("Laura", "Tucci", 444444);
		Student s4("Josh", "Moner", 3232323);
		slist STDlist(150);

		STDlist.addStudentToTheList(s1);
		STDlist.addStudentToTheList(s2);
		STDlist.addStudentToTheList(s3);
		STDlist.addStudentToTheList(s4);

		cout << STDlist.searchById(555555)<<endl;
		cout << STDlist.searchByName("Laura")<<endl;
		STDlist.listStudentsName();

		return 0;



}


