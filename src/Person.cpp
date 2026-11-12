#pragma once
#include "Person.h"

Person::Person(int id, string name, int age): id(id), name(name), age(age) {}

//Getters
int Person::getID() const{
    return id;
}
string Person::getName() const{
    return name;
}
int Person::getAge() const{
    return age;
}
