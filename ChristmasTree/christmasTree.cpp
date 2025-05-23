#include<iostream>

using namespace std;

int main()
{
    int i,j,m=0,n=10,k;

    for(k=1;k<=3;k++)
    {
        
        if(k==1)
        {  
            m=m+1; 

    for ( i = m; i <=n ; i++)
    {
       for(j=1;j<=2*n-1;j++)
       {
            if(j>=n-(i-1) && j<=n+(i-1))
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
        
        
    }
        }
        

        else if(k>=2)
        {
            m=m*2;
            
            for ( i = m; i <=n ; i++)
          {
       for(j=1;j<=2*n-1;j++)
       {
            if(j>=n-(i-1) && j<=n+(i-1))
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
        
        
       }
        }
    }

    for ( i = 2; i <=n ; i++)
    {
       for(j=1;j<=2*n-1;j++)
       {
            if(j>=n-2 && j<=n+2)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
        
        
    }
    
    return 0;
}