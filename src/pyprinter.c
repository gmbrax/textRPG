


#include <stdio.h>
#include <stdlib.h>

#include "pyprinter.h"


void pythonPrinter()
{
    const char *string[3];
    string[0]="4+2";
    string[1]="6+6";
    string[2]="(20*3)*7";
    printf("Gerando Arquivo Python\n");
    FILE *fptr;
    fptr = fopen("../../out/data/tits.py","w+");
    if (fptr == NULL)
    {
        printf("Erro ao abrir arquivo");
        exit(4);
        
    }
    fprintf(fptr, "def main():\n\t" );
    
    for (int i =0;i<=2;i++){
        if (string[i]!= NULL){
        fprintf(fptr, "print(%s)\n\t",string[i]);
        }
        else{
            break;
        }
    }
    fprintf(fptr,"\nif __name__ == \"__main__\":\n\tmain()");
    fclose(fptr);

}