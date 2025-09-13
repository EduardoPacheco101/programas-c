#include <stdio.h>

int main(void){
    char s;
    int num_1 = 0, num_2 = 0;
    printf("Qual operação deseja fazer? ");
    scanf("%c",&s);
    printf("Digite o primeiro valor: ");
    scanf("%d", &num_1);
    printf("Digite o segundo valor: ");
    scanf("%d", &num_2);
    
    switch(s){
    case '*':
        printf("%d", num_1 * num_2);
        break;
    case '+':
        printf("%d", num_1 + num_2);
        break;
    case '-':
        printf("%d", num_1 - num_2);
        break;
    case '/':
        printf("%d", num_1 / num_2);
        break;
    default:
        printf("indisponivel");
        break;
    }
}
/*int main(void){

    int cont = 0;
    float temp1 = 0;
    printf("Digite a temperatura: ");
    scanf("%f", &temp1);
    printf("Voce vai converter (1 para Celsius, 2 para Fahrenheit)");
    scanf("%d", &cont);
    if(cont == 1){
        temp1 = (temp1 - 32)/1.8;
        printf("%.2f graus Celsius", temp1);
    } else if (cont == 2){
        temp1 = (temp1 * 1.8) + 32;
        printf("%.2f graus Fahrenheit", temp1);
    }
}
}*/