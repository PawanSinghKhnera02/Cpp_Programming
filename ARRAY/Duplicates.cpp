#include <iostream>
using namespace std;
void findDuplicates(int arr[], int size) {
    cout << "Duplicates items: ";
    for (int i = 0; i < size; i++) 
    {
         bool duplicate = false;
        for (int j = 0; j < i; j++)   
        {
            if (arr[i] == arr[j]) 
            {
                duplicate = true;
                break;
            }
        }
        if (duplicate) 
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() 
{
    int arr[] = {1, 1, 6, 8, 7, 7, 9, 9, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    findDuplicates(arr, size);

    return 0;
}
