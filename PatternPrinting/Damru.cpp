#include <iostream>
using namespace std;
// DAMRU PATTERN PRINTING

int main()
{
    int n = 5;
    cout<<"Enter the number: ";
    cin>>n;
   
for (int i=1; i<n; i++)
{
    for(int k= 0 ; k<=i-1 ; k++)
    {
        cout<<" ";
    }
    for(int j = 0; j< 2*(n-i)+1; j++)  //2*(n-i)  ((2*n)-i
    {
    cout<<"*";
    }
    cout<<endl;
}

for(int i = 1; i<=n; i++)               //n = 5
{                                       //1 2 3 4
    for(int k= 0; k<= (n)-i; k++)       //3 5 7 9
    {
        cout<<" ";
    }
    for(int j = 0; j<(2*i)-1; j++)
    {
    cout<<"*";
    }
    cout<<endl;
}
}