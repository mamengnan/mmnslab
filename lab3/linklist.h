/* data struct and its operations */

typedef struct DataNode
{
    char* cmd;
    char* desc;
    int   (*handler)();
    struct DataNode* next;
}tNode;

/*find a cmd in the linklist and return the datanode point*/
tNode* FindCmd(tNode* head,char* cmd);
/*show all cmd in linklist*/
int ShowAllCmd(tNode* head);
