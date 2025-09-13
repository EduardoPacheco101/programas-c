/*Criar um programa capaz de receber 3 valores de mensalidade de um usuário
Solicitar se havera ou não taxa (1,27)
Resultados 
mostrar nome mostrar media sem taxa
mostrar media com taxa
*/

#include <stdio.h>
#include <string.h>
int main(void){

    float men_1 = 0, men_2 = 0, men_3 = 0;
    const float tax = 1.27;
    int ttax = 0;
    char nome [45] = "teste";
    printf("\nDigite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';
    printf("Digite o valor da primeira mensalidade: ");
    scanf(" %f", &men_1);
    
    printf("Digite o valor da segunda mensalidade: ");
    scanf(" %f", &men_2);
    
    printf("Digite o valor da terceira mensalidade: ");
    scanf(" %f", &men_3);
    
    printf("havera acrescimo de taxa? (1 para sim, 0 para nao):");
    scanf(" %d", &ttax);
    
    if(ttax == 1){
        printf("%s  o resultado e:%.2f", nome, ((men_1 * tax) + (men_2 * tax) + (men_3 * tax)) / 3 );
    }
    else {
        printf("%s o resultado e:%.2f", nome,(men_1 + men_2 + men_3)/3);
    }
    return 0;
}