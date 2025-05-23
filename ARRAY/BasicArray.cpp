#include <iostream>
using namespace std;

void printArray(int arr[] , int size )
{

    cout<< "printing an array = ";
   //print an array
   for (int i= 0; i<size; i++)
  {
    cout<<arr[i]<<" " ;
  }
  cout<<endl;
  cout<<"printing Done."<<endl ;
}

int main(){

//declare
/*int num[15];

//accessing an arr  ay

cout<< "the value of 4th index = " <<num[4] <<endl;

cout<< "the value of 20th index = " <<num[20] <<endl;
*/

//initialising an array

/* int second[3] = {5,7,11};

cout << "value at 2nd index = " <<second[2]<<endl;
cout << "value at 2nd index = " <<second[1]<<endl;
cout << "value at 2nd index = " <<second[0]<<endl;
*/

int third [15] = {2 , 7};

int n = 15;

printArray(third, 15);

int thirdsize = sizeof(third) /sizeof(int);
cout<< "size of third: "<<thirdsize<<endl;
//print an array
/*
for (int i= 0; i<n; i++)
{
    cout<<third[i]<<" " ;
}
 cout<<endl;

cout<< "everything is fine" <<endl;
*/

int fourth[10] = {0};

int m = 10;
printArray(fourth, 10);
/*
cout<< "printing an array = ";
//print an array
for (int i= 0; i<m; i++)
{
    cout<<fourth[i]<<" " ;
}
cout<<endl;
*/
int fifth[10] = {1};

int L = 10;
printArray(fifth, 10);

int fifthsize = sizeof(fifth) /sizeof(int);
cout<< "size of fifth: "<<fifthsize<<endl;

/*
cout<< "printing an array = ";
//print an array
for (int i= 0; i<L; i++)
{
   
    cout<<fifth[i]<<" " ;
}
 cout<<endl;
*/
 //Same value in array

int sixth[10];

for(int i=0; i<10; i++)
{
    sixth[i] = 4;
}

printArray(sixth, 10);
/*
cout<<"array with same value : ";
for(int i=0;i<10;i++)
{
    cout<<sixth[i]<<" ";
}

*/
return 0;

}


// filling an array with the same elements - 
/*
#include <iostream>
 using namespace std;
  int main()
  {
    int arr[25];
    fill_n(arr,25,45);
    for (int i = 0; i <25 ; i++)
    {
      cout << arr[i] << " ";
    }
    return 0;
   }


// Second approach for filling an array with same element -
#include <iostream>
 using namespace std;
  int main()
  {
    int arr[1000];
    int num;
    cout<<"enter the element: ";
    cin>>num;
    
    int size;
    cout<<"size of an array: ";
    cin>>size;
    
    for (int i= 0; i<size; i++)
    {
        arr[i] = num;
    }
    for (int i = 0; i <size ; i++)
    {
      cout << arr[i] << " ";
    }
    return 0;
   }

   */