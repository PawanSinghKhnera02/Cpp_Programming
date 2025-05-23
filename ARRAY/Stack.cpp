
#include <iostream>
using namespace std;
#define size 3

class stack {
    int arr[size];
    public:
    int top= -1;
    
    void push();
    void pop();
    void disp();
};

void stack:: push()
{
    if (top == size-1)
    {cout << "stack overflow" <<endl;}
    else
    {
        top++;
        cout<< "enter data= ";
        cin>>arr[top];
    }
}

void stack:: pop()
{
    if (top==-1)
    {cout<<"underflow" <<endl;}
    else
    {cout<<arr[top]<< " deleted" <<endl;
    top--;
    }
}

void stack :: disp()
{
    if (top<0)
    cout<<"empty" <<endl;
    while (top>=0)
    {cout<<arr[top]<<endl;
    top--;
   }
}    

int main() {
     stack st;
     st.push();
     st.push();
     st.push();
     st.push();
     st.pop();
     st.pop();
     st.pop();
     st.disp();
}
