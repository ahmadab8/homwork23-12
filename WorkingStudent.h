
#include  "Employee.h"
#include "Student.h"

class WorkingStudent :public Employee, public Student
{
	bool same_institute;
public:
	WorkingStudent(char* name, long id, int age, int averge_, char* institute_, float salary, bool same_institute) :Employee(name, id, age, salary), Student(name, id, age, averge_,institute_), Person(name, id, age)
	{

	}


};