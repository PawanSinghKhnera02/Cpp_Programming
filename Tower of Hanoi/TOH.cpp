#include<iostream>
using namespace std;
void TOH(int n, char s, char a, char d)
{
    static int count = 0;
    if(n==1)
    { 
        //base case
        count++;
        cout<<count<<" move disk "<<n<<" from "<<s<<" to "<<d<<endl;
        return ;
    }
        //recursive case
        
        TOH(n-1, s , d , a);
        count++;
        cout<<count<<" move disk "<<n<<" from "<<s<<" to "<<d<<endl;
        TOH(n-1, a, s, d);
}

int main()
 {
    int n;
    cout<<" enter the no. of disk:";
    cin>>n;
    TOH(n, 'A', 'B', 'C');
 } 
