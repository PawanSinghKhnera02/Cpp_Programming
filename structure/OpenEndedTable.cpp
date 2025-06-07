#include <iostream>
using namespace std;

int main() {
    char resume;

    do {
        int num;

        // Ask for input
        cout << "Enter a number =  ";
        cin >> num;

        // Display the table
        cout << "Table of " << num << endl;
        for (int i = 1; i <= 10; ++i) 
        {
            cout << num << " x " << i << " = " << num * i << endl;
        }

        //  if we want another table
        cout << "want the table of another number? (y/n)=  ";
        cin >> resume;

    } 
    
    while (resume == 'y' || resume == 'Y' );

    cout << "end the code";

    return 0;
}

/*

#include <iostream>
using namespace std;
class table 
{
    public:
    void show();
};
void table :: show()
{
   int a;
   cout<< "enter the number you want a table = ";
   cin>>a;
   
   for (int i=1; i<=10;i++)
   { 
       int b= a*i;
       cout<< a<< "*"<< i<< "="<<b <<endl ;
       
   }
}
int main ()
{
    table t;
    int a;
    do {
        cout<<"enter a random num= ";
        cin>>a;
        t.show();
       }
    while (a!=-1);
    {
    cout<< "not found ";
    }
}
*/
