#include <iostream>
using namespace std;

int SortedArr( int arr[], int size)
{
    for(int i= 0; i<size; i++)
    {
        int minIndex = i;
        
        for( int j= i+1; j<size; j++)
        {
            if (arr[j]<arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap (arr[minIndex], arr[i]);    
    }
}
int printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    
    int arr[100];
    int size;
    cout<<"enter the size of array: ";
    cin>>size;

    cout<<"enter the elements of array: ";

    for(int i= 0; i<size; i++)
    {
        cin>>arr[i];
    }
    
    
    //int arr[9]= {29, 72, 98, 13, 87, 66, 52, 51, 36};

    SortedArr(arr,size);
    printArray(arr,size);
    return 0;
}