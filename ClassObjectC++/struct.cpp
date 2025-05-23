#include <iostream>
using namespace std;

struct Rectangle {

    int width, height;
    static float price;
    Rectangle (int i , int n)
    {
            this -> width = i;
            this -> height = n; 
    }

    void display()
    {
        cout<< "area of rectangle = "<< (width*height)<<endl;
        cout<< "the price is : "<<Rectangle::price;
    }
};
 float Rectangle:: price = 10;
int main ()
{
    struct Rectangle rec = Rectangle(8,5);
    rec.display();
}