#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<< "enter the input: ";
    cin>>n;
    //loop for printing upper triangle
    for (int line = 1; line<= n; line++)
    {
        //printing space
        for (int j= 0; j< (n-line); j++)
        {
            cout <<" ";
        }
        //printing characters
        for (int k= 0; k < ((2*line)-1);k++ )
        {
            char ch = (char)('A'+k);
            cout <<ch;
        }
        cout<<endl;
    }

    for (int line = n+1; line<=((2*n)-1); line++)
    {
        //printing space
        for(int k = 0; k< (line-n); k++)
        {
            cout<<" ";
        }

        //printing characters
        for(int j = 0; j< ((2*((2*n)-line))-1); j++)
        {
            cout<< (char)('A'+j);
        }
        cout<<endl;
    }


    return 0;
}