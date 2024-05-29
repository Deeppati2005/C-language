#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main() 
{
	FILE *fp;
    char c;
    int freq[5]={0}; 
    fp=fopen("para.txt","r");
    while((c=fgetc(fp))!=EOF)
	{
		if(isalpha(c)) 
		{
			c=toupper(c);
			switch(c)
			{
            	case 'A': freq[0]++;
                		break;
            	case 'E': freq[1]++;
						break;
            	case 'I': freq[2]++;
                		break;
            	case 'O': freq[3]++;
                		break;
            	case 'U': freq[4]++;
                		break;
            	default:
						break;
        		}
		}
    }
    printf("A/a: %d\n",freq[0]);
    printf("E/e: %d\n",freq[1]);
    printf("I/i: %d\n",freq[2]);
    printf("O/o: %d\n",freq[3]);
    printf("U/u: %d\n",freq[4]);
    fclose(fp);
}
