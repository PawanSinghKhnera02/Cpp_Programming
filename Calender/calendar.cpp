#include<iostream>
#include<iomanip>
using namespace std;


int startyear(int);
int startmonth(int,int);
void display(int,int,int,int);


void display(int yr,int month,int mn,int day)
{
    char const *name[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    cout<<setw(35)<<name[month-1]<<setw(5)<<yr<<endl<<endl;
    int  arr[7]={6,0,1,2,3,4,5};
    day=arr[day];
    cout<<setw(10)<<"Sunday"<<setw(10)<<"Monday";
    cout<<setw(10)<<"Tuesday"<<setw(10)<<"Wednesday";
    cout<<setw(10)<<"Thursday"<<setw(10)<<"Friday"<<setw(10)<<"Saturday"<<endl;
    if(day!=0)
    {
        cout<<setw(day*10)<<1;
        day=(day+1)%7;
    }
    else
    {
        cout<<setw(70)<<1<<endl;
        day=(day+1)%7;
    }
    
    for(int i=2;i<=mn;i++)
    {
        switch (day)
        {
         case 1:
         cout<<setw(10)<<i;
        break;
        case 2:
        cout<<setw(10)<<i;
        break;
        case 3:
        cout<<setw(10)<<i;
        break;
        case 4:
        cout<<setw(10)<<i;
        break;
        case 5:
        cout<<setw(10)<<i;
        break;
        case 6:
        cout<<setw(10)<<i;
        break;
        case 0:
        cout<<setw(10)<<i<<endl;
        break;
        }
        day=(day+1)%7;
    }
    cout<<endl;

}

int startyear(int yr)
{
    int yrcount=0;
        for(int i=1;i<yr;i++)
    {
        if(((i%4==0)&&(i%100!=0))||((i%400==0)&&(i%100!=0)))
        {
            yrcount++;
        }

    }
    int track=(yr+yrcount)%7;
    return track;
}

int startmonth(int yr,int mn)
{
    int day,month,k=0;
    month=mn;
    day=startyear(yr);
    for(int i=1;i<=month;i++)
    {
        if(i==1)
        {
            mn=31;
        }
        else if(i==2)
        {
            if(((yr%4==0)&&(yr%100!=0))||(yr%400==0)&&(yr%100!=0))
            {
                day=day+3;
                mn=29;
                k=1;
            }
            else
            {
                day=day+3;
                mn=28;
            }
        }
        else if(i==3)
        {
            if(k==1)
            {
                day=day+1;
            }
            mn=31;
            
        }
         else if(i==4)
        {
           day=day+3;
            mn=30;
        }
         else if(i==5)
        {
            day=day+2;
            mn=31;
        }
         else if(i==6)
        {
            day=day+3;
            mn=30;
        }
         else if(i==7)
        {
            day=day+2;
            mn=31;
        }
         else if(i==8)
        {
            day=day+3;
            mn=31;
        }
         else if(i==9)
        {
            day=day+3;
            mn=30;
        }
         else if(i==10)
        {
            day=day+2;
            mn=31;
        }
         else if(i==11)
        {
            day=day+3;
            mn=30;
        }
         else if(i==12)
        {
            day=day+2;
            mn=31;
        }
    }
    day=day%7;
    display(yr,month,mn,day);
    return 0;
}

int main()
{
    int yr,mn,ch;
    while(1)
    {
        cout<<"Press 1 to enter year and month(limit 1800 to 2200,no negative values)and Press 2 to exit"<<endl;
        cin>>ch;
        if(ch==1)
        {
        cout<<"Enter the year"<<endl;
        cin>>yr;
        cout<<"Enter the month"<<endl;
        cin>>mn;
        startmonth(yr,mn);
        }
        else if(ch==2)
        {
            break;
        }

    }

    return 0;
}

