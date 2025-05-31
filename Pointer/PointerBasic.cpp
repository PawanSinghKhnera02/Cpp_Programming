#include <iostream>
using namespace std;

int main ()
{
    int num= 5;

    cout<<"number is : "<<num<<endl;

    //address of operator -> &
    cout<<"address of num is : "<<&num<<endl;

    int *ptr = &num;

    cout<<"address is: "<<ptr<<endl;
    cout<<"value is : "<<*ptr<<endl;

    double d = 4.3;
    double *p2 = &d;
    cout<<"address of p2 is: "<<p2<<endl;
    cout<<"value is : "<<*p2<<endl;
    
    cout<<"size of integer: "<<sizeof(num)<<endl;
    cout<<"size of integer pointer: "<<sizeof(ptr)<<endl;

    cout<<"size of  double pointer: "<<sizeof(p2)<<endl;


    //two ways to initialize pointer->

    int i= 6;
    int *p= &i;

    cout <<p<<endl;
    cout<<*p<<endl;


    int *q= 0;
     q= &i;
    cout<<q<<endl;
    cout<<*q<<endl;

    int Num = 7;
    int *Z = &Num;

    cout<<"before: "<<*Z<<endl;

    (*Z)++;
    cout<<"after: "<<*Z<<endl;

//copying a pointer
    int *a = Z;
    cout<< a<<"_"<< Z <<endl;
    cout<< *a<< "_"<< *Z<<endl;




return 0;
}