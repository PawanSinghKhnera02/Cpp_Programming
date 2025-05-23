// first occurance /left most occ or last occurance/ right most occ question based on binary search

#include <iostream>
using namespace std;

int FirstOccur ( int arr[], int n, int key)
{
    int s = 0; int e = n-1;
    int mid = s + (e-s)/2;
    int ans= -1;
    while (s<e)
        {
            if (arr[mid] == key)
            {
                ans = mid;
                e = mid-1;
            }
            else if (key > arr[mid]) //right  m jao
            {
                s = mid + 1;
            }
            else if (key < arr[mid]) //left m jao
            {
                e = mid - 1;
            }
            mid = s + (e-s)/2;

        }
        return ans;

}

int LastOccur ( int arr[], int n, int key)
{
    int s = 0; int e = n-1;
    int mid = s + (e-s)/2;
    int ans= -1;
    while (s<e)
        {
            if (arr[mid] == key)
            {
                ans = mid;
                s = mid+1;
            }
            else if (key > arr[mid]) //right  m jao
            {
                s = mid + 1;
            }
            else if (key < arr[mid]) //left m jao
            {
                e = mid - 1;
            }
            mid = s + (e-s)/2;

        }
        return ans;

}

int main ()
{
    int arr[9] = { 1, 2, 2, 3, 3, 3, 3, 3, 6} ;
    int F= FirstOccur(arr,9,3);
    int L= LastOccur(arr,9,3);
    cout<<"first occurance of 3 is at index "<<F<<endl;
    cout<<"Last occurance of 3 is at index "<<L<<endl;
    int T = (L-F) + 1;
    cout<<"total number of occurance of 3 is: "<<T<<endl;
    return 0;
}