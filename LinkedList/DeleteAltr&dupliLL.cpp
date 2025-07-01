#include <iostream>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;

    Node(int data)
    {
        val = data;
        next = NULL;
    }
};

class LinkedList
{
    public:
    Node* head;

    LinkedList()
    {
        head = NULL;
    }

    void InsertAtTail(int value)
    {
        Node* new_node = new Node(value);
        if(head==NULL)
        {
            head = new_node;
            return;
        }
        Node*temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void display()
    {
        Node* temp = head;
        while(temp != NULL)
        {
            cout<<temp->val<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

void deleteAlternateNodes(Node* &head)
{
    Node* curr_node = head;

    while(curr_node != NULL && curr_node->next != NULL)
    {
        Node* temp = curr_node->next;
        curr_node -> next = curr_node -> next -> next;
        free(temp);
        curr_node = curr_node->next;
    }
}


void deleteDuplicateNodes(Node* &head)
{
    Node* curr_node = head;
    while (curr_node != NULL)
    {
        while(curr_node->next != NULL && curr_node->val == curr_node->next->val )
        {
            //delete curr ->next;
            Node* temp = curr_node->next;
            curr_node ->next = curr_node ->next ->next;
            free(temp);
        }
        //this loop ends when current node and next node values are different 
        //or linked list ends
        curr_node = curr_node->next;
    }
}

int main()
{
    LinkedList ll;
    //deleting alternates

    ll.InsertAtTail(1);
    ll.InsertAtTail(2);
    ll.InsertAtTail(3);
    ll.InsertAtTail(4);
    ll.InsertAtTail(5);
    ll.InsertAtTail(6);
    ll.display();

    deleteAlternateNodes(ll.head);
    ll.display();


//deleting duplicates
/*
    ll.InsertAtTail(1);
    ll.InsertAtTail(2);
    ll.InsertAtTail(2);
    ll.InsertAtTail(3);
    ll.InsertAtTail(3);
    ll.InsertAtTail(3);
    ll.display();

    deleteDuplicateNodes(ll.head);
    ll.display();
*/
}