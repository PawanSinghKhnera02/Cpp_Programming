#include<iostream>

using namespace std;
int main()
{

int Aarray[9]= {10,20,30,20,40,60,30,60,93};
int Barray[9]= {5,15,25,10,30,50,20,45,75};
int sumarray[9];
for (int i=0;i<9;i++)
{
sumarray[i]= Aarray[i] + Barray[i]; 
cout <<sumarray[i]<<endl;

}    
return 0;




}
