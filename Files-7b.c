
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char s[100];
	while(1){
	
printf("\nEnter text( '.' to stop):");
fgets(s,100,stdin);
int i,f=0;
            for(i=0;i<strlen(s);i++)
	      	{
	      		if(s[i]=='.')
	      		{
	      			f=1;
	      			break;
				  }
			  }
	       fputs(s,stdout);
            if(f==1)
			  break;
}
return 0;
}
