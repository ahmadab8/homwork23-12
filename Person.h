
#include <iostream>
#include<string>
using namespace std;
#ifndef GITKOMEWORK_PERSON_H
#define GITKOMEWORK_PERSON_H


class Person {
    char name[10];
    long id;
    int age;
public:
    Person(char *name1,long id,int age):id(id),age(age){
		for (int i = 0;i < sizeof(name1) - 1;i++)
			name[i] = name1[i];
		name[sizeof(name1) - 1] = '\0';
    }
    
};


#endif //GITKOMEWORK_PERSON_H
