#include<iostream>

using namespace std;
struct matrix 
{
    int a[3][3];
};

matrix operator +(matrix,matrix);
int main()
{

        matrix a,b,c;
        cout<<"Enter the fisrt mstrix"<<endl;
        int i,j;
        for(i=0;i<3;i++)
        {

            for(j=0;j<3;j++)
            {
                cout<<"Enter the "<<i+1<<" row of the matrix"<<endl;
                cin>>a.a[i][j];
            }
        }
        cout<<"Enter values of second matrix"<<endl;
        for(i=0;i<3;i++)
        {

            for(j=0;j<3;j++)
            {
                cout<<"Enter the "<<i+1<<" row of the matrix"<<endl;
                cin>>b.a[i][j];
            }
        }

        cout<<"The third matrix is"<<endl;
        c=a+b;
         for(i=0;i<3;i++)
        {

            for(j=0;j<3;j++)
            {
                
                cout<<c.a[i][j];
            }
            cout<<endl;
        }





    return 0;
}
matrix operator +(matrix a,matrix b)
{
    matrix temp;
    int i,j;
    for(i=0;i<3;i++)
        {

            for(j=0;j<3;j++)
            {
                temp.a[i][j]=a.a[i][j]+b.a[i][j];
            }
        }
        return temp;
}