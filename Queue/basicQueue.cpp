#include <iostream>
using namespace std;

class queue {
    int *arr;
    int size;
    int front;
    int rear;

    public:
    queue (int size)
    {
        this ->size = size;
        arr= new int [size];
        front = 0;
        rear = 0;
    }


    bool isempty() 
    {
        if (rear== front)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void push(int data)
    {
        if (rear==size)
        {
            cout<< "queue is full"<<endl;
        }
        else
        {
            arr[rear]= data;
            rear++;
        }
    }
    int pop ()
    {
        if (front == rear )
        {
        return -1;
        }
    else 
    {
        int ans = arr[front];  //10 20 30 40 50
        arr[front]= -1;
        front++;
        if (front == rear)
        {
            front = 0;
            rear = 0;
        }
        return ans;
    }
    }
/*
    int front() 
    {
        if (front == rear)
        {
            return -1;
        }
        else 
        {
            arr[front];
        }
    }
 */   
};
int main()
{
    queue q(6);
    q.push (10);
    q.push (20);
    q.push (30);
    q.push (40);
    q.push (50);
    

    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop ()<<endl;
    cout<<q.pop ()<<endl;
    q.push(100);
    cout<<q.pop()<<endl;
    cout <<q.isempty()<<endl;
    cout<<q.pop()<<endl;
    cout <<q.isempty()<<endl;
    cout<<q.pop()<<endl;
    cout <<q.isempty()<<endl;
return 0;
}
