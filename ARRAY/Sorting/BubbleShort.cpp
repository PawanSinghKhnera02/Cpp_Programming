#include <iostream>
using namespace std;
int BubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 1; i < n; i++) 
    {
       for( int j= 0; j<n-1; j++)
       {
            if(arr[j]>arr[j+1])
            {
                swap (arr[j],arr[j+1] );
            }  
       }
    }    
}

int printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    cout << arr[i] << " ";
    cout << endl;
}

int main ()
{
    int arr[100];
    int n;
    cout << "enter the size: ";
    cin>>n;

    cout<< "enter the element: ";
    for (int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }

    BubbleSort(arr,n);
    printArray(arr,n);
    return 0;
}