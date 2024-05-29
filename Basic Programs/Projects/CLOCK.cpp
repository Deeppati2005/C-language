#include<stdio.h>
#include<windows.h>
int main()
{
	int h,m,s;
	printf("\t\t\t----------------------------------");
	printf("\n \t\t\t|Welcome to DIGITAL CLOCK IN C:|\n");
	printf("\t\t\t----------------------------------");
	printf("\n \t\t\tSet Time:");
	scanf("%d%d%d",&h,&m,&s);
	if(h>12||m>60||s>60)
	{
		printf("!!Error!!");
	}
	printf("Clock:");
	while(1)
	{
		s++;
		if(s>59)
		{
			m++;
			s=0;
		}
		if(m>59)
		{
			h++;
			m=0;
		}
		if(h>12)
		{
			h=1;
		}
		
		printf("%02d:%02d:%02d\n",h,m,s);
		Sleep(1000);
		system("cls");
	}
}
