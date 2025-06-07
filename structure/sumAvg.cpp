#include <iostream>
//#include <cmath>
using namespace std;
int main() 
{
    int arr[100];
    int n;
   // float avg;

    cout << "enter the size: ";
    cin>>n;

    cout<< "enter the element: ";

    for (int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }

    int sum = 0; int count = 0;

    for (int i = 0; i < n; i++) 
    {
        sum =sum+ arr[i];
        count++;
    }
   float avg = (float) sum/count;
    cout<<"sum is: "<<sum <<endl;
    cout<< "avg is: "<<avg;
    
    return 0;
}