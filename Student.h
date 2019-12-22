
#include "Person.h"

class Student: public virtual Person {
private:
	int average;
	char institute[10];
public:
	Student(char* name, long id, int age, int averge_, char* institute_): Person(name, id, age), average(averge_) {
		
		for (int i = 0;i < sizeof(institute_) - 1;i++)
			institute[i] = institute_[i];
		institute[sizeof(institute_) - 1] = '\0';
	}
};

