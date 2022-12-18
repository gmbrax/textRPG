#include <stdio.h>
#include "token.h"

typedef struct token 
{
void* token_value; 
char token_type[];
} token;

//toDo: Puta que paril vou ter que implementar a buceta de uma lista encadeada
//toDo: criar um arquivo so para esse bomba da lista encadeada

struct token *initializeTokenList()
{
    token list[1 ]; // Saporra não funciona para esse caso já que nao pode ser expandida 
    printf("Tamanho da bomba: %li",sizeof(list));

    return list;

}