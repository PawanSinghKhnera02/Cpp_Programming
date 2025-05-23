#include <iostream>
using namespace std;

bool search (int arr[], int size,  int key)
{
  for (int i= 0; i<size; i++)
  {
     if (arr[i] == key)
     {
      return 1;
     }   
  }

return 0;

}

int main (){

  int key;
  int arr[10]= {2, 7 -2, 10, 22 , -2 , 0, 5 , 22, 1 };

  cout <<"enter the key to search for: "<<endl;
 
  cin>>key;
  bool found = search(arr, 10, key);
  
  if ( found ){
    cout<<"key is present"<< endl;
  }
  else{
    cout<<"key is absent"<< endl;
  }

 return 0; 
}