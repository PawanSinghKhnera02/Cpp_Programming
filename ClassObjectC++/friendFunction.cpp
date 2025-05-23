#include <iostream>
using namespace std;

/* properties of friend functions
1. not in the scope of class.
2. since it is not in the scope of the class, it cannot be called from the object of that class.  c1.sumComplex == invalid
3. can be invoked without the help of any objects
4. usually contains the objects as arguments 
5. can be declared incide public or private section of the class.
6. it can not access the members directly by their names or need object_name.member_name to access any member.
*/

class Complex {
    int a, b;

    //below line means that non member -  sumComplex function is allowed to do anything with my private parts (menbers)

    friend Complex sumCOmplex(Complex c1 , Complex c2);
    public: 

    void setNumber (int n1 , int n2)
    {
        a = n1;
        b = n2;
    }

    void displayNumber() 
    {
        cout<< "the value is : "<< a <<" + "<<b<<"i"<<endl;

    }
};

Complex sumCOmplex (Complex c1 , Complex c2)
{
    Complex c3;
    c3.setNumber((c1.a +c2.a ), (c1.b+c2.b));
    return c3;

}

int main()
{
    Complex c1, c2, sum;
    c1.setNumber(1,4);
    c2.setNumber(4,8);

    c1.displayNumber();
    c2.displayNumber();

    sum = sumCOmplex(c1,c2);
    sum.displayNumber();
}

