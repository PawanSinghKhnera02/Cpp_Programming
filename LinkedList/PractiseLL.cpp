#include <iostream>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;

    Node(int data)
    {
        this-> val = data;
        this-> next = NULL;
    }

};

    void InsertAtHead(Node* &head , int data)
    {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }

    void InsertAtTail(Node* &head, int data)
    {
        Node* new_node = new Node(data);

        Node* temp = head;
        while(temp->next != NULL)
        {
            temp = temp-> next;
        }

        temp->next = new_node;
    }

    void InsetAtPosition(Node* &head, int data, int pos)
    {
        Node* new_node = new Node(data);

        Node* temp = head;
        int curr_pos = 0;

        while(curr_pos == pos-1)
        {
            temp = temp->next;
            curr_pos++;
        }

        new_node->next = temp->next;
        temp->next = new_node;

    }

    void updateAtPosition(Node* &head, int data, int k)
    {
        Node* temp= head;
        int curr_pos=1;

        while(curr_pos != k)
        {
            temp= temp->next;
            curr_pos++;
        }
        temp->val = data;
    }

    void deleteAtHead(Node* &head)
    {
        Node* temp = head; //node to be deleted
        head = head->next;
        free(temp);

    }

    void deleteAtTail(Node* &head)
    {
        Node* second_last = head; 

        while(second_last->next->next != NULL)
        {
            second_last = second_last->next;
        }
        Node* temp = second_last->next; //node to be deleted
        second_last -> next = NULL;
        free(temp);

    }

    void deleteAtPosition(Node* &head, int pos)
    {
        if (pos ==0)
        {
            deleteAtHead(head);
            return;
        }

        int curr_pos = 0;
        Node* prev = head;
        while (curr_pos != pos-1)
        {
            prev = prev-> next;
            curr_pos++;
        }

        //prev is pointing to node at prev - 1
        Node* temp = prev->next;
        prev ->next =prev->next->next;
        free(temp);

    }



    void display(Node* &head)
    {
        Node* temp = head;
        while(temp != NULL)
        {
            cout<<temp->val <<"->";
            temp= temp->next;
        }
        cout<<"NULL"<<endl;
    }

int main()
{
    //Node* head = new Node(1);
    // cout<< head->val; 
    Node* head = NULL;

    InsertAtHead(head, 2);
    InsertAtHead(head, 1);

    InsertAtTail(head,3);
    InsertAtTail(head,4);
   
    display(head);
    InsetAtPosition(head,9,2);
    display(head);
    updateAtPosition(head,10,2);
    display(head);
    deleteAtHead(head);
    display(head);
    deleteAtTail(head);
    display(head);
    deleteAtPosition(head,1);
    display(head);



    return 0;
 
}
