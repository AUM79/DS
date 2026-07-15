#include <stdio.h>
#include <conio.h>

struct student
{
    int rollno;
    char name[20];
};

void main()
{
    struct student s1;
    clrscr();

    printf("Enter Roll Number: ");
    scanf("%d", &s1.rollno);

    getchar();   // Consume the newline left by scanf()

    printf("Enter Name: ");
    fgets(s1.name, sizeof(s1.name), stdin);

    printf("\nStudent Data is as follows");
    printf("\n************************");
    printf("\nRoll Number : %d", s1.rollno);
    printf("\nName        : %s", s1.name);

    getch();
}
