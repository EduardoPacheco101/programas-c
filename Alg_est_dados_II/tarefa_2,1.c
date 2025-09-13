#include <stdio.h>
#include <math.h>

/*1) Faça um programa que leia um número inteiro e retorne seu antecessor e seu sucessor.*/
/*
int main(void){
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    printf("Antecessor: %d\n", numero - 1);
    printf("Sucessor: %d\n", numero + 1);
    return 0;
}
*/

/*3) Faça um programa que leia três valores inteiros e mostre sua soma.*/
int main(void){
    int num_1,num_2,num_3,soma;
    printf("Digite o primeiro valor: ");
    scanf(" %d", &num_1);
    printf("Digite o segundo valor: ");
    scanf(" %d", &num_2);
    printf("Digite o terceiro valor: ");
    scanf(" %d", &num_3);
    soma = num_1 + num_2 + num_3;
    printf("Soma: %d", soma);
    return 0;
}