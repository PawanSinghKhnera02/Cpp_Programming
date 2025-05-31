#include<iostream>

using namespace std;

int main()
{
    char n[100];
    cout<<"Enter the sentence"<<endl;
    cin.getline(n,100);
    int track1=0,track2=0;

    while(n[track1] !='\0')
    {
        while(n[track1]!=' '&& n[track1]!='\0')
        {
            track1++;
        }
        // reverse the word
        for(int j=track1-1;j>=track2;j--)
        {
            //if(n[j]=='a'||n[j]=='e'||n[j]=='i'||n[j]=='o'||n[j]=='u')
            cout<<n[j];
        }
        cout<<' ';
        if(n[track1]=='\0')
            break;
        track1++;
        track2=track1;
    }


    return 0;
}