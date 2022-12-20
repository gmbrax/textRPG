#include <stdio.h>
#include <stdlib.h>
#include "token_linkedlist.h"
#include "token.h"



struct linkedList initList()
{
    linkedList list;
    list.size = 0;
    list.list = NULL;
    return list;
}

void appendList(struct linkedList *list, void *data, int datatype)
{   
    Node *iterator;
    if (list->list == NULL)
    {
        list->list = (Node*)malloc(sizeof(Node));
        list->list->data = &data;
        list->list->next = NULL;
        list->size++;
        return;
    }
    iterator = list->list;
    while(1)
    {
        if (iterator->next == NULL)
        {
            iterator->next = (Node*)malloc(sizeof(Node));
            iterator->next->next = NULL;
            iterator->next->data = &data;
            list->size++;
            break;
        }
        else {
            iterator = iterator->next;
        }
    }

    
}