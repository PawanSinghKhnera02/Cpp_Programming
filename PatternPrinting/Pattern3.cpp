#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the odd input to print plus: ";
    cin>>n;

    for (int line = 0; line<n; line++)
    {
        for(int i = 0; i<n; i++)
        {
            if (i == n/2) cout<<"*";
            else if(line == n/2) cout<<"*";
            else cout <<" ";
        }
        cout<<endl;
    }
    return 0;
}