#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void addition(int c);

int main()
{
    char *places[]={"one","two","three","four","five","six","seven","eight","nine"};
    char *tenplaces[]={"eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    char *hundredplaces[]={"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninty"};
    char num[30];
    printf("Enter the number\n");
    gets(num);
    
    int j,k,len,p=0,i=0;
    len=strlen(num);
    if(len>=10)
    {
        printf("The number has exceeded the range\n");
        exit(0);
    }
    

   for(j=len; j>=1 && num[i]!='\0' && i<=len-1;j--)
   {
          k=((num[i])-48);

       if(k!=0)
   {
       if(j>3)
   {
    if(j%2!=0)
    {
        if(k==1 && j>1 )
        {
            p=((num[i+1])-48);
            if(p!=0)
            printf("%s",tenplaces[p-1]);
            else
            printf("ten");
            j--;
            i++;
            addition(j);
        }
        else
        {
        printf("%s ",hundredplaces[k-2]);
        p=((num[i+1])-48);
        if(p==0)
        addition(j-1);
        }
        

    }
    else
    {
        
        printf("%s ",places[k-1]);
        addition(j);
    }
   }

   
   else if(j==3)
   {
        
        printf("%s",places[k-1]);
        addition(j);
        
    }

   else if(j==2)
    {
         if(k==1 && j>1 )
        {
            p=((num[i+1])-48);
            if(p!=0)
            printf("%s",tenplaces[p-1]);
            else
            printf("ten");
            j--;
            i++;
            
        }
        else 
        printf("%s ",hundredplaces[k-2]);
        
    }
   else if(j==1)
    {
        
        printf("%s ",places[k-1]);
    }
   }

   i++;
}

    return 0;
}

void addition(int c)
{
    switch (c)
    {
    case 3:
            printf(" hundred ");
            break;
    case 4:
        printf(" thousand ");
        break;
    case 6:
         printf(" lakh ");
         break;
    case 8:
    printf(" crore ");
    default :
    printf(NULL);
    
    
    }
}