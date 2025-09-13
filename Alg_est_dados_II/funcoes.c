#include <stdio.h> 
#include <stdlib.h>

int soma(int a, int b);

 /*void titulo(){
    printf("########################\n");
    printf("#     Calculadora      #\n");
    printf("########################\n");
    printf("\n\n");
}


int main(void){
    titulo();
    int s = soma(15,15);
    printf("%d",s);
    return 0;

}
int soma(int a, int b){
    int somanum = a + b;
    return somanum;
}*/

void minhafunc(int vet[5]){
    int i;
    for (i = 0; i<5; i ++){
        printf("%d\n", vet[i]);
    }
}
int main(){
    int vet[5] = {10,20,30,40,50};
    minhafunc(vet);
    vet[1] = 112;
    vet[2] = 1001;
    vet[4] = 65;
    minhafunc(vet);
    return 0;
}