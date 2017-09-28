#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"linklist.h"

tNode* FindCmd(tNode* head,char* cmd)
{
    if(head==NULL||cmd==NULL)
    {
        return NULL;
    }
    tNode* p=head;
    while(p!=NULL)
    {
        if(strcmp(p->cmd,cmd)==0)
	{
	    return p;
 	}
	    p=p->next;
    }
    return NULL;
}

int ShowAllCmd(tNode* head )
{
    printf("Menu List:\n");
    tNode* p=head;
    while(p!=NULL)
    {
        printf("%s -- %s\n",p->cmd,p->desc);
        p=p->next;
    }
    return 0;
}
