#include <stdio.h>
#include "token_linkedlist.h"
#include "token.h"

typedef struct linkedlistNode{
    int index;
    void* data;
    struct linkedlistNode *next;
}Node;

typedef struct linkedList
{
    int size;
    struct linkedlistNode *list;
    struct linkedlistNode *iterator;
}linkedList;

struct linkedList initList()
{
    linkedList list;
    list.size = 0;
    list.list = (Node*)malloc(sizeof(Node));
    list.list->next = NULL;
    list.list->data = NULL;
    list.list->index = 0;
    list.iterator = NULL;

    return list;
}