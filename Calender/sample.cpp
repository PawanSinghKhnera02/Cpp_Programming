#include<iostream>
using namespace std;

class data
{
    private:
    int meta;
    public:
    data()
    {
        meta=0;
    }
    data(int a)
    {
        meta=a;
    }
    data& operator+(data& a)
    {
        meta=meta+a.meta;
    }
    void display()
    {
        cout<<meta<<endl;
    }


};
int main()
{

    data a(23),b(34),c(56),d(12);
    a=a+b+c+d;
    a.display();








}