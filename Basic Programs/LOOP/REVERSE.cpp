#include <stdio.h>
#include <math.h>
int main () 
{
   float n,j;
   int i,m,r1=0;
   printf("\nEnter the number:");
   scanf("%f",&n);
   m=int(n);
   printf("%d",m);
   while(n!=m);
   {
   	j=fmod(n,10);
   	r1=r1*10+j;
   }
   printf("%d",r1);
}
   
