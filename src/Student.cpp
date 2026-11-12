#include<iostream>
#include "Student.h"
using namespace std;

Student::Student(int id, string name, int age, string department, string phone): Person(id, name, age), department(department), phone(phone) {}

//Getters
string Student::getDepartment() const{
    return department;
}
string Student::getPhone() const{
    return phone;
}
void Student::displayDetails() const{
    cout<<"Student ID: "<<getID()<<endl;
    cout<<"Name: "<<getName()<<endl;
    cout<<"Age: "<<getAge()<<endl;
    cout<<"Department: "<<getDepartment()<<endl;
    cout<<"Phone: "<<getPhone()<<endl;
}