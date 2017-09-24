#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char op[10]="";
    while(1)
    {
	scanf("%s",op);
        if(strcmp("help",op)==0)
	{
	    printf("this is help command,total eight commands are:help|hello|exit|cm1|cm2|cm3|cm4|cm5|\n");
	}
	else if(strcmp("hello",op)==0)
	{
	    printf("this is hello command\n");
	}
	else if(strcmp("exit",op)==0)
	{
	    printf("this is exit command\n");
	    return 0;
	}
	else if(strcmp("cm1",op)==0)
	{
	    printf("this is cm1 command\n");
	}
 	else if(strcmp("cm1",op)==0)
        {
            printf("this is cm1 command\n");
        }
	else if(strcmp("cm2",op)==0)
        {
            printf("this is cm2 command\n");
        }
	else if(strcmp("cm3",op)==0)
        {
            printf("this is cm3 command\n");
        }
	else if(strcmp("cm4",op)==0)
        {
            printf("this is cm4 command\n");
        }
	else if(strcmp("cm5",op)==0)
        {
            printf("this is cm5 command\n");
        }
	else 
	{
	printf("wrong command,please input 'help' to check right commands\n");
	}	
    }
return 0;
}
