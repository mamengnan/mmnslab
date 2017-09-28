/* write by mmn        */
/* 2017-9-28           */
#include<stdio.h>
#include<stdlib.h>
#include"linklist.h"

int Help();
int Exit();
#define CMD_LEN 20
#define DESC    1000
#define CMD_NUM 10

/* MENU program */

static tNode head[]=
{
    {"help","this is help cmd",Help,&head[1]},
    {"version","menu program v1.0",NULL,&head[2]},
    {"exit","exit from the program",Exit,NULL}
}; 
void main()
{
    /*cmd line begin*/
    while(1)
    {
        char cmd[CMD_LEN];
	printf("input cmd>");
	scanf("%s",cmd);
	tNode *p=FindCmd(head,cmd);
	if(p==NULL)
	{
	    printf("this is a wrong cmd\n");
	    continue;
	}
	printf("%s -- %s\n",p->cmd,p->desc);
	if(p->handler!=NULL)
	{
	    p->handler();
	}
    }
}
int Help()
{
    ShowAllCmd(head);
    return 0;
}
int Exit()
{
    exit(0);
}
