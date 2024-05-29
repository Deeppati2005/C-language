#include<stdio.h>
#include<string.h>
int count_vowel(char s[])
{
	int i,c=0;
	strupr(s);
	for(i=0;s[i];i++)
	{
		if(s[i]=='A' || s[i]=='E' || s[i]=='O' || s[i]=='I' || s[i]=='U')
		c++;
	}
	return c;
}
void space(int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		printf(" ");
	}
}
int count(int n)
{
	if(n==0)
	return 1;
	else{
		int c=0;
		while(n!=0)
		{
			c++;
			n/=10;
		}
		return c;
	}
}
int main()
{
	char s[100]="C is a high level procedural programming language";
	strcat(s," ");
	char tmp[30];
	int i,j=0,v=0,c,l,k=1;
	int sp[]={4,23,6,6,10};
	printf("+---------------------------------------------------------------+\n");
	printf("| SlNo | Word                    | Length | Vowels | Consonents |\n");
	printf("+---------------------------------------------------------------+\n");
	for(i=0;s[i];i++)
	{
		if(s[i]!=32)
		tmp[j++]=s[i];
		else{
			tmp[j]='\0';
			l=strlen(tmp);
			v=count_vowel(tmp);
			c=l-v;
			printf("| %d ",k);
			space(sp[0]-count(k));
			printf("| %s ",tmp);
			space(sp[1]-l);
			printf("| %d ",l);
			space(sp[2]-count(l));
			printf("| %d ",v);
			space(sp[3]-count(v));
			printf("| %d ",c);
			space(sp[4]-count(c));
			printf("|\n");
			k++;
			j=0;
		}
	}
	printf("+---------------------------------------------------------------+\n");
	
}
