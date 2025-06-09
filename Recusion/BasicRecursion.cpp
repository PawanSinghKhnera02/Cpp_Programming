// when a calls itself directly or indirectly, is called resursion.
// Recursive function =  base case->  return mandatory (becoz segmentation fault will occur)
//recursive relation also mandatory 

//factorial code-> 

#include <iostream>
using namespace std;

int factorial(int n) 
{
    //base case
    if (n == 0)
        return 1;
        //recursive relation
       // int smallerproblem = factorial(n-1);
        //int biggerproblem = n * factorial(n-1);
       // return biggerproblem;
        return n * factorial(n-1);
}

int main()
{

    int n;
    cout<< "enter the number: ";
    cin >> n;

    int ans = factorial(n);
    cout<< "factorial : " << ans<< endl;

    return 0;
}
