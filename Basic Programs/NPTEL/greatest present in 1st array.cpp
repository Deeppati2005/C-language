#include<stdio.h>
#define s 20
int main()
{
  int a[s],b[s],n,m,i,j,flag=0,x=0;
  scanf("%d",&n);
  
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
   
  scanf("%d",&m);
   
   for(i=0;i<m;i++)
  {
    scanf("%d",&b[i]);
  }
 
   for(i=0;i<n;i++)
  {
     flag=0;
     for(j=0;j<m;j++)
     {
       if(a[i]==b[j])
       {
			flag=1;
         	break;
       }
     }
       
       if(flag==0)
       {
         if(a[i]>x)
         {
           x=a[i];
         }
       }
  }
  printf("%d",x);
      
}
