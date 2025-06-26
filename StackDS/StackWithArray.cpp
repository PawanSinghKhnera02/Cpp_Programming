#include <iostream>
using namespace std;
 
class stack {
    //properties
    public:
 
    int *arr;
    int top;
    int size;
   
    //behavior
stack (int size)
    {
    this -> size= size;
    arr = new int [size];
    top= -1;
    } 

void push(int element) 
{
    if (size - top > 1)
    {
       top++;
       arr[top] = element;
    } 
    else
    {
       cout<<"stack overflow. "<<endl;
    }
}

void pop () 
{
    if (top >=0 )
    {
        top--;
    }
    else
    {
        cout<<"stack is overflow." <<endl;
    }
}

int peek() 
{
     if (top>=0)
     {
        return arr[top];
     }
     else 
     {
        cout<<"stack is empty."<<endl;
        return -1;
     }
}

bool isEmpty()
{
    if (top==-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

};

int main(){

    stack st(5);

    st.push(22);
    st.push(45);
    st.push(54);
    
    cout<<st.peek() <<endl;
    
    st.pop();

    cout<<st.peek() <<endl;

    st.pop();

    cout<<st.peek()<<endl;

    st.pop();

    cout<< st.isEmpty()<<endl;
    cout<<st.peek()<<endl;

    return 0;
}




