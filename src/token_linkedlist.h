

typedef struct linkedlistNode{
    
    struct Token *data;
    struct linkedlistNode *next;
}Node;

typedef struct linkedList
{
    int size;
    struct linkedlistNode *list;

}linkedList;
struct linkedList initList(void);
void appendList(struct linkedList *list, struct Token *data);
void printList(linkedList *List);