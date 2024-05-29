#include <stdio.h>

int find_factorial(int k){
  int n,f=1;
     for(int j=1;j<=k;j++)
     {
       f=f*j;
     }
   
  
}

int main(){
    int n,k;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&k);
        printf("%d ", find_factorial(k));
    }
    
    return 0;
}
