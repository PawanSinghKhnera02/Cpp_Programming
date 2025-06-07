/*
#include<iostream>
using namespace std;

int main()
{
    int a,b,c,i=3,t;
    cout<<"Enter the number of terms you want to print fibonnacci sequence"<<endl;
    cin>>t;
    a=0;b=1;
    cout<<endl;
    cout<<a<<endl;

    cout<<b<<endl;
    while (i<=t)
    {
        c=a+b;
        cout<<c<<endl;
        a=b;  //1  1  2  3  5
        b=c;  //1  2  3  5  8
        i++;
    }
    

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main()
{
int num, i , result;
cout<< "enter the number= " ;
cin>>num;
for (i=1; i<=10; i++)
 {   
    if (num%2==0)
  {
    result= num*i;
    cout<<num<<" * "<<i<<"=" <<result <<endl;
  }
    
 }
 return 0;
}
*/

#include <iostream>
using namespace std;

class Mammals{
    public:
    void displayMammal() 
    {
        cout<< "I am a Mammal."<<endl;
    }
};

class MarineAnimals{
    public: 
    void displayMarineAnimal() 
    {
        cout<<"I am Marine Animal."<<endl;
    }
};

class BlueWhale: public Mammals, public MarineAnimals {
    public:
    void displayBlueWhale() 
    {
        cout<<"I belong to both the categories : Mammals and Marine Animals."<<endl;
    }
};

int main(){
    Mammals mammalobj;
    MarineAnimals marineanimalobj;
    BlueWhale bluewhaleobj;

    mammalobj.displayMammal();
    marineanimalobj.displayMarineAnimal();
    bluewhaleobj.displayBlueWhale();

    bluewhaleobj.displayMammal();
    bluewhaleobj.displayMarineAnimal();

    return 0;
}