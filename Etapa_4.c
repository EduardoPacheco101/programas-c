#include <stdio.h>
/*
int main(void){
    
    int i = 0;
    for(i = 0; i <=100; i ++){
        printf("%d\n", i );
    }
    return 0;
}
*/
/*
int main(void){

    int i = 0, a = 0;

    for(i = 1; i <= 10; i ++){
        for( a = 1; a <= 10; a ++ ){
            printf("->%d\n",a * i);

        }
        

    }
    return 0;
}
*/
/*
int main(void){

    int t = 0;
    int num = 0;
    int soma = 0;
    while(t < 1){
        printf("Digite um número: ");
        scanf("%d", &num);
        if(num == 0){
           printf("a soma e:%d\n", soma); 
           break;
            
        }
        else{
            soma += num; 
            
        }

    }


    return 0;
}
*/
/*
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
    return 0;
}
*/
#include <stdio.h>

int main(void){

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

    return 0;
}