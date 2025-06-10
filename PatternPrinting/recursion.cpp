#include <iostream>
using namespace std;

void fun (int num) //5  //value define
{
/*
if(num==0)
{
   return 1;
}
else
{
  return num*fun(num-1); //5*
}
*/
num= num+10; 
cout<<num<<endl;
}

main()
{
    int num= 100;
    cout<<num<<endl;
    fun (num) ; //call by value
    cout<<num<<endl;
    fun (num) ;
/*
int num;
cout<< "enter the num: " ;
cin>>num; //5
int a= fun(num); //calling
cout<< " the factorial of " << num <<" is : "   <<a;
*/

}