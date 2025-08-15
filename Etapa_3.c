#include <stdio.h>
/*
int main(void){

    int num = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if(num < 0){
        printf("O numero e negativo");
    }
    else if (num == 0){
        printf("O numero e zero");
    }
    else{
        printf("O numero e positivo");
    }
    return 0;
}
    */
/*
int main(void){
    int var_1 = 0;
    int var_2 = 0;
    printf("Digite o primeiro valor: ");
    scanf("%d", &var_1);
    printf("Digite o segundo valor: ");
    scanf("%d", &var_2);
    if(var_1 > var_2){
        printf("%d e maior que %d", var_1,var_2);
    }
    else{
        printf("%d e maior que %d", var_2,var_1);
    }
    return 0;
}
*/
int main(void){
    int quantidade_notas = 0;
    float nota = 0, soma = 0;
    int i = 0;
    printf("Digite a quantidade de notas: ");
    scanf("%d", &quantidade_notas);
    for( i = 0; i < quantidade_notas; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &nota);
        soma += nota;
    }

    float media = soma / quantidade_notas;
    printf("A média das notas é: %.2f\n", media);

    return 0;
}