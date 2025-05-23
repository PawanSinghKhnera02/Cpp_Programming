/* #include<iostream>
using namespace std;

int main()
{ int a, k, j;
cout <<"enter the number= ";
cin>>a;
cout<< "k digits= ";
cin>>k;
    for(int i=0;i<k;i++)
    {
        a= a/10;
    }

cout<<a;
return 0;

}
*/

#include <iostream>
using namespace std;

// abcde  bcde cde de e

int main() {
	
	char arr[]={'A','B','C','D','E'} ;
	int i,j;
	
	for ( i=1; i<=5; i++ ) 
	{
		
		
		for(j= i-1; j<=4; j++)
		{
			cout<<arr[j];
     	}
	   cout<<endl;
	}
	
	return 0;
		
}