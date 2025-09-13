#include <stdio.h>
#include <string.h>

int fun(int vet[],int tam_vet){
    int i;
    int soma = 0;
    for(i = 0; i < tam_vet; i++){
        
        soma += vet[i];
    }
    return soma;
}

int main(void){
    
    int a, b, i;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &a);
    int vetor2[a];
    printf("Digite os %d elementos do vetor:\n ", a);
    for(i = 0; i<a; i++){
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }
    b = fun(vetor2,a);
    printf("\nA soma de todos os elementos e :%d\n ", b);
    return 0;
}

