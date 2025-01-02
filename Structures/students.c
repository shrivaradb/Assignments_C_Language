#include<stdio.h>
#include<string.h>

struct Student
{
    char name[100];
    int rollno;
    int marks;
};

int main()
{
    
    struct Student student[5];
    int i;

    for(i=0;i<5;i++)
    {
    printf("Enter Students Name[%d]: ",i+1);
    fgets(student[i].name, sizeof(student[i].name), stdin);

    printf("Enter Roll Number[%d]: ",i+1);
    scanf("%d",&student[i].rollno);

    printf("Enter marks[%d]: ",i+1);
    scanf("%d",&student[i].marks);

    getchar();
    }

    printf("STUDENTS %d DETAILS:\n\n",i+1);
    
    for(i=0;i<5;i++)
{
    printf("STUDENT %d DETAILS:\n",i+1);
    printf("Name: %s",student[i].name);
    printf("Roll Number: %d\n",student[i].rollno);
    printf("Marks: %d\n\n",student[i].marks);
}

    return 0;    
}