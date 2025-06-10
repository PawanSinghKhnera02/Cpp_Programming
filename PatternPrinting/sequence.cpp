#include<iostream>

using namespace std;

int main()
{
    char arr[]={'A','B','C','D','E'};
    int i,j;

for (i=1;i<=5;i++)
    {
        for(j=i-1;j<=4;j++)
        {
            cout<<arr[j];

        }
        cout<<endl;
    }
    return 0;
}
