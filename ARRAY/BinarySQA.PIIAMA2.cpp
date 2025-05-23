//Peak index in a mountain array based on binary search //perfectly work

#include <iostream>
using namespace std;
int PeakIndex(int arr[] , int n)
{
    int s= 0;
    int e= n-1;
    int mid= s + (e-s)/2;

    while (s<e)
    {
        if (arr[mid] < arr[mid+1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid= s + (e-s)/2;
    }
    return s;
}


int main()
{
    int arr[6] = { 3, 4, 5, 6, 2, 1};

    cout<<"Peak index in a mountain array is "<<PeakIndex(arr,6)<<endl;
    return 0;
}