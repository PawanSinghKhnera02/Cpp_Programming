#include <iostream>
using namespace std;

//Binary to decimal ->
/*
int main ()
{

    int n;
    cout<< "enter the binary number: ";
    cin>>n;
    int ans = 0;
    int power = 1;

    while (n>0)
    {
        int last_digit = n%10;
        ans += last_digit * power;
        power *= 2;
        n /=10;
    }
    cout<< ans<<endl;

    return 0;
}*/
// 1010  1*8+ 0*4+ 1*2+ 0*1
// 14/0  7/1  3/1  1/0 

//decimal to binary ->

int main()
{

    int n; //14
    cout<<"enter the decimal number: ";
    cin>>n;

    int ans = 0;
    int power = 1;
    while (n>0)
    {
        int parity_digit = n%2;  //1
        ans = ans + (parity_digit*power); //1110
        power = power*10; //10000
        n =  n/2;//0
    }
    cout<<ans<<endl;

    return 0;
}