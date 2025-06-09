#include <iostream>
using namespace std;
int power(int n) 
{ 
    //base case
    if (n == 0)
    return 1;

    //recursive case
    //int smallerproblem = power(n-1);
    //int biggerproblem = 2 * smallerproblem;

    //return biggerproblem;
    return 2 * power(n-1);
}
int main()
{
    int n;
    cout<<  "enter the power number: " ;
    cin>> n;

    int ans= power(n);
    cout<< "the output is: " << ans <<endl;

    return 0;


}