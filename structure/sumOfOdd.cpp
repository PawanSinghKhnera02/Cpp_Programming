#include <iostream>
using namespace std;


int main()
{   
    int i= 1;
    int terms, sum = 0, count= 1;
    cout << "enter the  number of terms= ";
    cin >> terms;
    while (count <= terms)
    {
        if (i % 2 != 0 )
        {
            cout<<i<<" " <<endl;
            sum = sum+i;
            i++;
            count++; 
        }
        else
        {  
            i++;
            continue;
        }
    }
    cout<<"sum is: "<<sum;
    return 0; 
}