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

void appendList(struct linkedList *list, struct Token *data)
{   
    Node *iterator;
    if (list->list == NULL)
    {
        list->list = (Node*)malloc(sizeof(Node));
        list->list->data = (token*) malloc(sizeof (token));
        list->list->data = data; //toDo: Verificar com o debugger qual o meio de certo de atribuir aqui
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
            list->list->data = (token*) malloc(sizeof (token));
            list->list->data = data; // Mesmo do acima
            list->size++;
            break;
        }
        else {
            iterator = iterator->next;
        }
    }

    
}

void printList(linkedList *List){ //toDo: Verificar se no debugger se o erro não está acontecendo aqui ou na atribuição
    Node *iterator;
    iterator = List->list;
    for(int i = 0; i< List->size; i++)
    {
        if (i == (List->size)-1){printf("Linked List [%i]: TOKEN:[%i]:[%i]",i,(int)iterator->data->token_value,iterator->data->token_type);}
        else{printf("Linked List [%i]: TOKEN:[%i]:[%i]->",i,(int)iterator->data->token_value,iterator->data->token_type);}
        iterator = iterator->next;
    }
}