#include "string.h"
#include "Person.h"

class Student: public Person {
private:
	int average;
	char institute[10];
public:
	Student(char* name, long id, int age, int averge_, char* institute_): Person(name, id, age), average(averge_) {
		strcpy(institute, institute_);
	}
};

