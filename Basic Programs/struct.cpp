#include<stdio.h>
struct student{
    int roll;
    char nm[40];
    float per;
}s[3];
int main() 
{
    int i;
    for(i=0;i<3;i++) 
	{
        printf("\n Enter the name:");
        fflush(stdin);
        gets(s[i].nm);
        printf("Enter the roll:");
        fflush(stdin);
        scanf("%d", &s[i].roll);
        printf("Enter the percent:");
        fflush(stdin);
        scanf("%f",&s[i].per);
    }
    for(i=0;i<3;i++) 
	{
        printf("\n Name: %s", s[i].nm);
        printf("\n Roll: %d", s[i].roll);
        printf("\n Percent: %f\n", s[i].per);
    }
}

