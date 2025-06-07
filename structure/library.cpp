#include<stdio.h>
#include<string.h>

int i=0;
struct book
{
    char acces[12];
    char title[50];
    char author[50];
    int price;
    int flag;
};
void printall(struct book b);
void addbook(struct book *d);

int main()
{
    struct book books[50];
    struct book temp;
    char menu;
    char name[50],writ[50];
    int k,j;
    printf("Enter your choice from 1 to 6\n");
    
    do
    {
        printf("1-To add book information\n");
        printf("2-To display all books\n");
        printf("3-To display all books by an author\n");
        printf("4-To display information about a book by book name\n");
        printf("5-Total no. of books\n");
        printf("6-To exit\n");
        printf("Enter choice from 1 to 6 and then press enter\n");
        scanf("%c",&menu);
        while((getchar())!='\n');
        switch(menu)
        {
            case '1':
            addbook(&books[i]);
            i++;
            break;
            case '2':
            for(k=0;k<i;k++)
            printall(books[k]);
            break;
            case '3':
            printf("Enter the author name\n");
            gets(name);
            for(k=0;k<i;k++)
            {
            if(strcmp(books[k].author,name)==0)
            {
                printall(books[k]);
            }
            }
            break;
            case '4':
            printf("Enter the book name\n");
            gets(writ);
            for(k=0;k<i;k++)
            {
                if(strcmp(books[k].title,writ)==0)
                {
                    printall(books[k]);
                }
            }
            break;
            case '5':
            printf("%d\n",(i));
            break;
        }
        
        
    }while(menu!='6');
    return 0;
}
void printall(struct book b)
{
    printf("%-30s%-30s%-30s%-30d%-30d\n",b.acces,b.title,b.author,b.price,b.flag);
}
void addbook(struct book *d)
{
    char acces[12];
    char title[50];
    char author[50];
    int price;
    int flag;
    printf("Enter accession number\n");
    scanf("%s",acces);
    while((getchar())!='\n');
    printf("Enter the title of the book\n");
    gets(title);
    printf("Enter the name of the author\n");
    gets(author);
    printf("Enter the price(no decimal values)\n");
    scanf("%d",&price);
    while((getchar())!='\n');
    printf("Enter '1' for issued book and '0' if a book is not issued\n");
    scanf("%d",&flag);
    strcpy(d->acces,acces);
    strcpy(d->title,title);
    strcpy(d->author,author);
    d->price=price;
    d->flag=flag;
}
