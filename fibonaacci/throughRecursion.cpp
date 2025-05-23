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