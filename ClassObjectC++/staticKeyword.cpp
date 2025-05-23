#include <iostream>
using namespace std;
//In C++, static is a keyword or modifier that belongs to the type not instance. So instance is not required to access the static members. In C++, static can be field, method, constructor, class, properties, operator and event.

//Memory efficient: Now we don't need to create instance for accessing the static members, so it saves memory. Moreover, it belongs to the type, so it will not get memory each time when instance is created.

class Account{
    public:
    int accNo;
    string name;
    static float rateOfInterest;
    static int count;
    //Account(int i, string n)
    void insert(int i, string n)
    {
        this-> accNo = i;
        this-> name = n;
        count++;
    }
    void display()
    {
        cout<< accNo<<" "<< name<< " "<<rateOfInterest<<endl;
    }
};
float Account :: rateOfInterest = 7.5;
int Account :: count = 0;
int main()
{
    /*Account A1 = Account(201,"Pawan");
    Account A2 = Account(202,"Aishu");

    A1.display();
    A2.display();*/

    Account B1;
    Account B2;

    B1.insert(301, "Krishu");
    B2.insert(302, "Aishu");

    B1.display();
    B2.display();
   
    cout<< "total number of object : "<<Account::count;

   return 0;
}