#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("stu.txt","r");
    char name[20];
    int roll,marks;
    printf("\n Enter the student name: ");
    gets(name);
    printf("\n Enter the student roll: ");
    scanf("%d",&roll);
    printf("\n Enter the student marks: ");
    scanf("%d",&marks);
    fprintf(fp,"%s %d %d",name,roll,marks);
    fclose(fp);
    printf("\n%s \n%d \n%d",name,roll,marks);
}

