#include <iostream>
#include <string>
using namespace std;

class student 
{
   private:
    int rollNumber;

    public:
    char grade;
    char *name;
    int *age;
//simple constuctor
    student ()
    {
        cout<< "constructor is called"<<endl;
        name = new char[100];
        age = new int;

    }

    char getgrade ()
    {
        return grade;
    }

    int getrollNumber()
    {
        return rollNumber;
    }

    char setgrade (char ch)
    {
        grade = ch;
    }

    int setrollNumber (int n)
    {
        rollNumber = n;
    }

    void setAge(int age)
    {
        this->age = &age;
    }

    void setName(char name[])    
    {
        this->name =  name;
    }
void print()
    {
        cout<< "[Name: "<<(this -> name)<<", ";
        cout<< "grade: "<<this -> grade<<", ";
        cout<< "age: "<<*(this ->age)<<", ";
        cout<< "rollNumber: "<<this -> rollNumber<<"]" <<endl;

    }

};

int main ()
{ 
    student pawan;

     pawan.setrollNumber(12);
     pawan.setgrade('D');
     char name[15] = "kate winslate";
     pawan.setName(name);
    
     pawan.setAge(26);
    
     pawan.print();

     student krishna(pawan); 
     krishna.print();
    
    /*
    //static allocation
    student pawan;

    pawan.setgrade('A');
    pawan.setrollNumber(123);
    cout<<"size of pawan : "<<sizeof(pawan)<<endl;
    cout<<"size of pawan grade: "<<sizeof(pawan.grade)<<endl;
    cout<<"size of pawan rollNumber: "<<sizeof(pawan.getrollNumber())<<endl;
    cout<<"grade of pawan: "<< pawan.grade<<endl;
    cout<<"rollNumber of pawan: "<< pawan.getrollNumber()<<endl;

    //dynamic allocation
    student *krishna = new student;
    krishna->setgrade('B');
    krishna->setrollNumber(234);
    cout<<"size of Krishna: "<<sizeof(krishna)<<endl;
    cout<<"size of Krishna rollnumber: "<<sizeof(krishna->getrollNumber())<<endl;

    cout<< "grade of krishna: "<<krishna->grade<<endl;
    cout<< "rollNumber of krishna: "<<krishna->getrollNumber()<<endl;

    cout<< "grade of krishna: "<<(*krishna).grade<<endl;
    cout<< "rollNumber of krishna: "<<(*krishna).getrollNumber()<<endl;

    student aish = pawan;

    cout<<"grade of aish:  "<<aish.grade;
    */
 
}