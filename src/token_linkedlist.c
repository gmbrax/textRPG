#include <stdio.h>
#include <stdlib.h>
#include "token_linkedlist.h"
#include "token.h"



struct linkedList initList()
{
    linkedList list;
    list.size = 0;
    list.list = (Node*)malloc(sizeof(Node));
    list.list->next = NULL;
    list.list->data = NULL;


    return list;
}

void appendList(struct linkedList *list, void *data, int datatype)
{   
    token NewToken;
    Node iterator;
    iterator = *list->list;
    switch (datatype) 
    {
        case 0: // Aqui serve para INTS
            break;
        case 1: // Aqui serve para FLOATS
            break;
        case 2: // Aqui serve para CHAR
            break;

    }
    if (iterator.data== NULL && iterator.next == NULL)
    {
        iterator.data = malloc(sizeof(token));
        iterator.data =  &NewToken;

    }
    
}