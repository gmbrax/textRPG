#include <stdio.h>
#include "token.h"
#include "token_linkedlist.h"


//toDo: Puta que paril vou ter que implementar a buceta de uma lista encadeada
//toDo: criar um arquivo so para esse bomba da lista encadeada

token *initializeTokenList() // Essa função vai ter que ir para o arquivo dedicado para a lista encadeada
{
    token list[1 ]; // Saporra não funciona para esse caso já que nao pode ser expandida 
    printf("Tamanho da bomba: %li",sizeof(list));

    return list;

}
void tokenize()
{

}