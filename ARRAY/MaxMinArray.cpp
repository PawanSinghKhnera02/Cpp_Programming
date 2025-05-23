#include <iostream>
using namespace std;
int getMax (int num[], int n){

   int maxi = INT16_MIN;

   for(int i=0; i<n;i++)
   {

    maxi = max (maxi , num[i]);
    //if(num[i]>max){
      // max = num[i];
    //}
   }
// returning max value
return maxi;

}


int getMin (int num[], int n){

   int mini = INT16_MAX;

   for(int i=0; i<n;i++)
   {
    mini = min(mini , num[i]);
    //if(num[i]<min){
     //  min = num[i];
    //}
   }
// returning min value
return mini;

}


int main(){
  
  int size;
  cout<<"size of array: ";
  cin>> size;

  int num[100];
  //taking input in array
  for(int i=0; i<size; i++)
  {
     cin>>num[i];
  }
   
   cout<<"max value is : "<<getMax(num , size)<<endl;
   cout<<"min value is : "<<getMin(num , size)<<endl;
return 0;
}