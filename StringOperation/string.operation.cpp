#include<iostream>
#include<string.h>

using namespace std;
class String
{
    protected:
    char str[50];
    public:
    String()
    {}
    String(char const *p)
    {
        int i=0;
        while(p[i]!='\0')
        {
            str[i]=p[i];
            i++;
        }   
        str[i]=p[i];
    }
    String(String const &t)
    {
        int i=0;
        while(t.str[i]!='\0')
        {
            str[i]=t.str[i];
            i++;
        }
        str[i]='\0';
    }
    void display()
    {
        cout<<str<<endl;
    }
    String & operator+(char const *p)
    {
        int i=0;
        while(str[i]!='\0')
        {
            i++;
        }
        int k=0;
        while(p[k]!='\0')
        {
            str[i]=p[k];
            i++; k++;
        }
        str[i]='\0';
        return *this;

    }
    String & operator=(char const *p)
    {
        int i=0;
        while(p[i]!='\0')
        {
            str[i]=p[i];
            i++;
        }
        str[i]='\0';
        return *this;
    }
    String & operator+=(const char *p)
    {
         int i=0;
        while(str[i]!='\0')
        {
            i++;
        }
        int k=0;
        while(p[k]!='\0')
        {
            str[i]=p[k];
            i++; k++;
        }
        str[i]='\0';
        return *this;
    }
};
class StringDisplay : public String
{
    public:
    StringDisplay()
    {}
    void display()
    {
        cout<<str<<endl;
    }
     StringDisplay(StringDisplay const &c)
    {
        
        int i=0;
        while(c.str[i]!='\0')
        {
            str[i]=c.str[i];
            i++;
        }
        str[i]='\0';
        

    }
    StringDisplay(const char *p):String(p)
    {

    }
    void length()
    {
        int i=0;
        while(str[i]!='\0')
        {   
            i++;
        }
        cout<<"Length of string= "<<i-1<<endl;
    }
    void size()
    {
        cout<<"Size in bytes= "<<sizeof(str)<<endl;
    }
    StringDisplay& operator=(StringDisplay&c)
    {
        int i=0;
        while(c.str[i]!='\0')
        {
            str[i]=c.str[i];
            i++;
        }
        str[i]='\0';
        return *this;
    }
     StringDisplay& operator=(const char *p)
    {
        String::operator=(p);
        return *this;
    }
    
    StringDisplay& operator+(StringDisplay&c)
    {
        int i=0;
        while(str[i]!='\0')
        {
            i++;
        }
        int k=0;
        while(c.str[k]!='\0')
        {
            str[i]=c.str[k];
            i++; k++;
        }
        str[i]='\0';
        return *this;
    } 
     StringDisplay& operator+(char const *p)
     {
        String::operator+(p);
        return *this;
     }
     StringDisplay& operator+=(char const *p)
    {  
        String::operator+=(p);
        return *this;
    }  
};
int main()
{
    StringDisplay a("PUBG BOY "),b="Pawan Singh Khnera ",c="is a ";
    a.display();     //both above declarations are correct
    b.display();
    c.display();
    b=b+c;
    b=b+a;
    b+="Gamer ";
    b=b+"or a professional player ";
    b+"and his girlfriend is Selena Gomez.";
    b.display();
    b.length();
    return 0;
}