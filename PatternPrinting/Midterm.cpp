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
        for (int k= 0; k<= n-line; k++)
        {
            cout <<" ";
        }

        //printing characters-> increasing
        for (int j= 0; j < line; j++ )
        {
            char ch = (char)('A'+j);
            cout <<ch;
        }
        
        //printing characters-> decreasing
        for(int j = line-2; j>=0; j--)
        {
            char ch = (char)('A'+j);
            cout<<ch;
        }
        cout<<endl;
    }

return 0;
}