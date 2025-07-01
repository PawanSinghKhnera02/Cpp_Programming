#include<iostream>

using namespace std;
class linklist
{
    private:
     struct node
    {
        int data;
        node *link;
    }*p;
    public:
    linklist();
    void append(int num);
    void rtr();
    void display();
    void actualrtr(node *r, node *q ,node* s)
    {
        if(q==NULL)
        {
            p=r;
        }
        else
        {
            r=q;
            q=q->link;
            r->link=s;
            actualrtr(r,q,r);
        }
    }
};
linklist::linklist()
{
    p=NULL;
}

void linklist::append(int num)
{
    node *temp, *r;
    temp=p;

    if(p==NULL)
    {
        p=new node;
        p->data=num;
        p->link=NULL;
    }
    else
    {
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
    node *temp;
    temp=p;
    while (temp!=NULL)
    {
       cout<<"data= "<<temp->data<<endl;
        temp=temp->link;
    }
}
void linklist::rtr()
{   
    node *r,*s=NULL;
    actualrtr(r,p,s);
}
int main()
{
    linklist l;
    l.append(10);
    l.append(20);
    l.append(30);
    l.append(40);
    l.append(50);
    l.append(60);
    cout<<endl;
    l.display();
    cout<<endl;
    cout<<"Reversed "<<endl;
    l.rtr();
    l.display();
    return 0;

}