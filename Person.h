//
// Created by Izadeen Alkoran on 11/12/2019.
//
#include <iostream>
using namespace std;
#ifndef GITKOMEWORK_PERSON_H
#define GITKOMEWORK_PERSON_H


class Person {
    char name[10];
    long id;
    int age;
public:
    Person(char *name,long id,int age):id(id),age(age){
    strcpy(this->name,name);
    }
    
};


#endif //GITKOMEWORK_PERSON_H
