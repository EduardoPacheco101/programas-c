#include <stdio.h>
/*
int main(void){

    int num_1;
    int num_2;
    int soma;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num_1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num_2);
    printf("\nA soma e: %d", soma = num_1 + num_2);
    printf("\nA subtracao e: %d", soma = num_1 - num_2);
    printf("\nA multiplicacao e: %d", soma = num_1 * num_2);
    printf("\nO resto e: %d", soma = num_1 % num_2);
    printf("\nA divisao e: %d", soma = num_1 / num_2);
    return 0;

}
*/
/*
int main(void){

    const float pi = 3.14;
    float r = 0;
    printf("Digite o raio: ");
    scanf("%f", &r);
    r = pi * (r * r);
    printf("%.2f", r);
    return 0;
}
    */
int main(void){
    
    int idd = 0;
    printf("Digite sua idade: ");
    scanf("%d", &idd);
    idd = idd * 365;
    printf("Voce tem %d dias", idd);
    return 0;
}