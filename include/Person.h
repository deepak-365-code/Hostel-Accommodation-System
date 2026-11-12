// base class declaration 
#pragma once
#include<string>
using namespace std;
class Person{
    int id;
    string name;
    int age;
    public:
    Person(int id, string name, int age);

    //Getters: These functions allow us to access private data safely.
    int getID() const;
    string getName() const;
    int getAge() const;

    virtual void displayDetails() const = 0;

    virtual ~Person() = default;
};
