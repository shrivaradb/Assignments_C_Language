#include <stdio.h>
#include <string.h>

struct Books
{
    char title[100];
    char author[100];
    char subject[100];
    
    
};
int main()
{
    
    struct Books book1,book2;
    
    
    strcpy(book1.title,"Atomic Habits");
    strcpy(book1.author,"James Clear");
    strcpy(book1.subject,"To Build Good Habits and Break Bad Ones.");
    
    printf("Title: %s\n",book1.title);
    printf("Author: %s\n",book1.author);
    printf("Suject: %s\n\n",book1.subject);
    
    strcpy(book2.title,book1.title);
    strcpy(book2.author,book1.author);
    strcpy(book2.subject,book1.subject);
    
    printf("Title: %s\n",book2.title);
    printf("Author: %s\n",book2.author);
    printf("Suject: %s\n",book2.subject);
    
  
    
    return 0;
    
}