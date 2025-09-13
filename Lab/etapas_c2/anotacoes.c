#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    printf("Numero de argumentos: %d\n", argc);
    int i;
    for (i=0; i<argc;i++){
        printf("Argumentos %d: %s\n", i, argv[i]);
    }
    if (argc > 1){
        if(strcmp(argv[1], "-p")== 0){
            printf("Entrou");
        }
    } 
    return 0;
}