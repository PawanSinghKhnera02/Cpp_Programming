#include <iostream>
using namespace std;
//example of C++ class where we are storing and displaying employee information using method.

class Employee {
    public:

    int id;
    string name;
    float salary;

    //void insert (int i, string s, float n)
    //Parameterised constructor
    Employee (int i, string s, float n)
    {
       this-> id = i;
       this->  name = s;
        this-> salary = n;
    }

    void display(){
        cout<<id<<" ; "<<name<<" ; "<<salary<<endl;
    }
};

int main()
{   
    // Employee e1;
    // Employee e2;
    // Employee e3;

    Employee e1 =Employee(101, "Pawan" ,50000 );
    Employee e2 = Employee(102, "Krishna", 70000);
    Employee e3=  Employee(103, "Aishwariya", 80000);

    // e1.insert(101, "Pawan" ,50000 );
    // e2.insert(102, "Krishna", 70000);
    // e3.insert(103, "Aishwariya", 80000);

    e1.display();
    e2.display();
    e3.display();

    return 0;
}



