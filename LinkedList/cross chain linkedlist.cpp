#include<iostream>

using namespace std;
class linklist
{
    private:
    struct node
    {
        int data;
        node* link;
    }*p;
    public:
    linklist();
    void display();
    void append(int num);
    void crossconcat(linklist,linklist);
};

linklist::linklist()
{
    p=NULL;
}
void linklist::append(int num)
{
    if(p==NULL)
    {
        p=new node;
        p->data=num;
        p->link=NULL;
    }
    else
    {
        node *temp=p, *r;
        while(temp->link!=NULL)
            temp=temp->link;
        r=new node;
        r->data=num;
        r->link=NULL;
        temp->link=r;
    }
}
void linklist::display()
{
    node* temp=p;
    while(temp!=NULL)
    {
        // cout<<"data="<<temp->data<<endl;
        cout<<temp->data<< "->";
        temp=temp->link;
    }
    cout<<"NULL"<<endl;
}
void linklist::crossconcat(linklist l,linklist k)
{
    node *p1,*p2,*temp;
    p1=l.p;
    p2=k.p;

    while (p2!=NULL) // bcoz p2(or linklist b has more elements but a count function can be used to decide the condition for loop)
    {
        temp=p1->link;
        p1->link=p2;
        p1=p2;
        p2=temp;
    }
    
}

int main()
{   
    linklist a,b;
    a.append(7);
    a.append(5);
    a.append(3);
    a.append(1);
    a.append(20);
    b.append(6);
    b.append(25);
    b.append(32);
    b.append(11);
    b.append(9);
    b.append(17);
    b.append(13);
    b.append(90);
    a.display();
   cout<<endl;
   b.display();
   cout<<endl;
   a.crossconcat(a,b);
   a.display();


}