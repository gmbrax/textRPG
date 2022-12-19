typedef struct linkedlistNode{
    
    void* data;
    struct linkedlistNode *next;
}Node;

typedef struct linkedList
{
    int size;
    struct linkedlistNode *list;

}linkedList;
struct linkedList initList(void);