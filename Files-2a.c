
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fptr=fopen("test.txt","r");
	if(fptr==NULL)
	printf("File doesn't exist\n");
	else
	{
        int size=0;
        fseek(fptr,0,2);
        size=ftell(fptr);
        printf("The size of given file is : %d\n", size);    
           fclose(fptr);
        
	}
	return 0;
}
