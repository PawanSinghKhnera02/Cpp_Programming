// C++ program for insertion sort
#include <iostream>
using namespace std;

// Function to sort an array using
// insertion sort
int insertionSort(int arr[], int n)
{
    int i, temp, j;
    for (i = 1; i < n; i++) 
    {
        temp = arr[i];
        j = i - 1;
 
        // Move elements of arr[0..i-1],
        // that are greater than key, 
        // to one position ahead of their
        // current position
        while (j >= 0 && arr[j] >temp) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
        
}
 
// A utility function to print an array
// of size n
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

    insertionSort(arr,n);
    printArray(arr,n);
    return 0;
}