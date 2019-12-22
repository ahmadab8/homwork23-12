#include "Person.h"

class Employee :public virtual Person
{
	float salary;
public:
	Employee(char name [],long id,int age,float salary):Person(name,id,age),salary(salary)
	{}
};