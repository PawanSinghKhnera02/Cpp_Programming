#include <iostream>
using namespace std;


void update (int arr[] , int n) 
{

    cout<<"inside the function"<<endl;

    //updating array's first element 
    arr[0] = 10;

    for(int i= 0 ; i<n ; i++  )
    {
        cout<<arr[i]<<" ";  
    }
    cout<<endl;

    cout<<"going back to main function";

}


int main() {

    int arr[3] = {1 , 2 , 3};
    
    //printing the array
    cout<<endl<<"printing the main function - " <<endl;
    for(int i= 0 ; i<3 ; i++)
    {

        cout<<arr[i]<<" ";  
    }
    
    cout<<endl;
    update (arr , 3);
    return 0;
}



//Sum of ARRAY's element- 

/*
int main(){
int sum= 0;
int arr[5];
cout<<"array input: ";

for(int i= 0 ; i<5; i++)
{
cin>>arr[i];
}

for(int i = 0; i<5; i++)
{

 sum = sum+ arr[i];

}
cout<<"sum of the arry's element: "<<sum;
return 0;

}


// MOST APPROPRIATE appoach for the SUM- 
int SumArray ( int arr[], int n)
{
    int sum= 0;
    for (int i=0; i<n; i++)
    {
        sum = sum+ arr[i];
    }    
    return sum;
}

int main (){

int arr[100];
int size;

cout<<"enter the size of array: ";
cin>>size;

cout<<"enter the elements of array: ";

for(int i= 0; i<size; i++)
{
    cin>>arr[i];
}

cout<< "sum of the array's element: "<<SumArray( arr , size );

return 0;
}

*/