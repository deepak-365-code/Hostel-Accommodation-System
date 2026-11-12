// student class declaration
#pragma once
#include "Person.h"
using namespace std;
class Student: public Person{
    string department;
    string phone;
    public:
    Student(int id, string name, int age, string department, string phone);

    //Getters 
    string getDepartment() const;
    string getPhone() const;

    void displayDetails() const override;
};
