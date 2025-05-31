#include<stdio.h>


int main()
{
        int d1,m1,y1,d2,m2,y2;
        printf("Enter the day, month and year of 1 current date\n");
        scanf("%d %d %d",&d1,&m1,&y1);
        printf("Enter the days month year of joining date\n");
        scanf("%d %d %d",&d2,&m2,&y2);
        int dm,totaldays=0,i,dd;
        dm=m1-m2;
        if(dm>=0)
        {
            totaldays=365*(y1-y2);
          for(i=m2+1;i<=m1;i++)
           {  switch (i)
            {
                case 1:
                totaldays=totaldays+31;
                break;
                case 2:
                if(y1%4==0 && y1%100!=0)
                totaldays=totaldays+29;
                else
                totaldays=totaldays+28;
                break;
                case 3:
                totaldays=totaldays+31;
                break;
                case 4:
                 totaldays=totaldays+30;
                 break;
                case 5:
                 totaldays=totaldays+31;
                 break;
                case 6:
                 totaldays=totaldays+30;
                 break;
                case 7:
                 totaldays=totaldays+31;
                 break;
                case 8:
                 totaldays=totaldays+31;
                 break;
                case 9:
                 totaldays=totaldays+30;
                 break;
                case 10:
                 totaldays=totaldays+31;
                 break;
                case 11:
                 totaldays=totaldays+30;
                 break;
                case 12:
                 totaldays=totaldays+31;
                 break;
                
            }

           }
            
           dd=d1-d2;
           totaldays=totaldays+dd;
        }
    else if(dm<0)
    {   
        totaldays=365*(y1-y2);
        for(i=m2;i>m1;i--)
           {  switch (i)
            {
                case 1:
                totaldays=totaldays-31;
                break;
                case 2:
                if(y1%4==0 && y1%100!=0)
                totaldays=totaldays-29;
                else
                totaldays=totaldays-28;
                break;
                case 3:
                totaldays=totaldays-31;
                break;
                case 4:
                 totaldays=totaldays-30;
                 break;
                case 5:
                 totaldays=totaldays-31;
                 break;
                case 6:
                 totaldays=totaldays-30;
                 break;
                case 7:
                 totaldays=totaldays-31;
                 break;
                case 8:
                 totaldays=totaldays-31;
                 break;
                case 9:
                 totaldays=totaldays-30;
                 break;
                case 10:
                 totaldays=totaldays-31;
                 break;
                case 11:
                 totaldays=totaldays-30;
                 break;
                case 12:
                 totaldays=totaldays-31;
                 break;
                
            }

           }
            
           dd=d1-d2;
           totaldays=totaldays+dd;
    }
    int k=0;
    for(y2;y2<y1;y2++)
    {
        if(y2%4==0 && y2%100!=0)
        k++;
    }
    printf("leap year=%d\n",k);
    totaldays=totaldays+k;
    printf("Total days=%d\n",totaldays);
    int yr,mn=0,days,mod;
    yr=totaldays/365;
    mod=totaldays%365;
    mod=mod-k;
    printf("Remaining days=%d\n",mod);
    
    if(mod<=31)
    {
         printf("%d days and %d years\n",mod,yr);
    }
   else
   {
           for(i=1;i<12;i++)
           { 
            if(mod>31)
            {
             switch (i)
            {
                case 1:
                mod=mod-31;
                mn++;
                break;
                case 2:
                if(y1%4==0 && y1%100!=0)
                mod=mod-29;
                else
                mod=mod-28;
                mn++;
                break;
                case 3:
                mod=mod-31;
                mn++;
                break;
                case 4:
                 mod=mod-30;
                 mn++;
                 break;
                case 5:
                 mod=mod-31;
                 mn++;
                 break;
                case 6:
                 mod=mod-30;
                 mn++;
                 break;
                case 7:
                 mod=mod-31;
                 mn++;
                 break;
                case 8:
                 mod=mod-31;
                 mn++;
                 break;
                case 9:
                 mod=mod-30;
                 break;
                case 10:
                 mod=mod-31;
                 break;
                case 11:
                 mod=mod-30;
                 break;
                case 12:
                 mod=mod-31;
                 break;
                
            }
            }
            else
            {
                break;
            }

        }
        days=mod;
        printf("%d days %d months %d years\n",days,mn,yr); 
    }

return 0;
}