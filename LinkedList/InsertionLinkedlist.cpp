#include <iostream>
using namespace std;


class Node {

    public:
    int data;
    Node* next;
    //constructor
    Node (int data)
    {
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int d)  
{
    //new node create
    Node* temp = new Node (d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &head, int d)
{
    //new node create
    Node* new_node = new Node (d);

    Node* temp = head;
    while(temp -> next != NULL)
    {
        temp = temp->next;
    }
    temp -> next = new_node;
   
}

void insertAtPosition (Node* &head, int position , int d)
{
    Node* temp = head;
    int cnt = 1;

    while (cnt < position-1)
    {
        temp = temp->next;
        cnt++;
    }
    
    //creating a node for d;
    Node* NodeToInsert = new Node (d);

    NodeToInsert -> next = temp-> next;
    temp ->next = NodeToInsert;
}

void print (Node* head)
{
    Node* temp = head;

    while (temp != NULL)
    {
        cout<< temp -> data<< " -> " ;
        temp = temp-> next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    //create a new node
   // Node* node1 = new Node(10);
    //cout<< node1 -> data << endl;
    //cout<< node1 -> next <<endl;

    // head pointed to new node
    Node* head = NULL;
    
    //Node* tail = node1;

    insertAtHead(head, 12);
    print(head);
    insertAtHead(head, 15);
    print(head);

    insertAtTail(head, 14);
    print(head);
    insertAtTail(head, 16);
    print(head);

    insertAtPosition(head, 3, 22);
    print (head);

}