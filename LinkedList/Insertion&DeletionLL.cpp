#include <iostream>
using namespace std;


class Node {

    public:
    int val;
    Node* next;
    //constructor
    Node (int data)
    {
        this -> val = data;
        this -> next = NULL;
    }
};

void InsertAtHead(Node* &head, int val)  
{
    //new node create
    Node* temp = new Node (val);
    temp -> next = head;
    head = temp;
}

void InsertAttail(Node* &head, int val)
{
  Node* new_node = new Node(val);

  Node* temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
    temp-> next = new_node;
}


void display (Node* &head)
{
   Node* temp = head;

   while (temp!=NULL)
   {
    cout<<temp->val<< "->";
    temp = temp->next;
   }
   cout<<"NULL"<<endl;

}

void InsertAtPosition(Node* &head, int val, int pos)
{

    Node* new_node = new Node(val);
    Node* temp = head;
    int curr_pos = 0;
    while(curr_pos != pos-1)
    {
        temp ->next =  temp;
        curr_pos++;
    }

    new_node-> next = temp->next;
    temp->next = new_node;
}

void deleteAtHead(Node* &head)
{
    Node* temp = head;
    head = head->next;
    free(temp);
}

void deleteAtTail(Node* &head)
{
    Node* sec_last =head;

    while(sec_last->next->next != NULL)
    {
        sec_last= sec_last->next;
    }
    Node* temp= sec_last->next;
    sec_last->next =NULL;
    free(temp);
}

void deleteAtPosition(Node* &head, int pos)
{
    Node* prev = head;
    int curr_pos =0;
    while (curr_pos!= pos-1)
    {
        prev= prev->next;
        curr_pos++;
    }
    Node* temp = prev->next;
    prev->next = prev->next->next;
    free(temp);

}

void UpdateAtPosition(Node* &head, int pos, int val)
{
    Node* temp = head;
    int curr_pos =0;
    while(curr_pos!=pos)
    {
        temp=  temp->next;
        curr_pos++;
    }
    temp->val = val;
}

int main() 
{

Node* head = NULL;

InsertAtHead(head, 2);
display(head);
InsertAtHead(head, 1);
display(head);
InsertAttail(head, 3);
display(head);
InsertAtPosition(head, 4, 1);
display(head);

UpdateAtPosition(head, 2, 5 );
display(head);

deleteAtHead(head);
display(head);
deleteAtTail(head);
display(head);
deleteAtPosition(head,1);
display(head);
return 0;

}