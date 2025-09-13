#include <stdio.h>
/*1) Elabore um programa que escreva as mensagens “Início do programa” e “Fim” na
tela, uma em cada linha, usando apenas um comando printf().
*/

int main(void){
    printf("Inicío de programa \nFim");
    return 0;
}


// 2) Escreva um programa que leia um número inteiro e depois o imprima.

int main(void){
    int num = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("Voce digitou: %d", num);
    return 0;
}


///3) Escreva um programa que leia um número inteiro e depois imprima a mensagem
///“Valor lido:”, seguido do valor inteiro. Use apenas um comando printf().

int main(void){
    int num = 0;
    puts("Digite um valor: ");
    scanf("%d", &num);
    printf("Valor lido: %d", num);
    return 0;
}


///4) Faça um programa que leia um número inteiro e depois o imprima usando o operador
///“%f”. Veja o que aconteceu.
int main(void){
    int num = 0;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    printf("Imprimindo: %f", num);
    return 0;
}

/*5) Faça um programa que leia um valor do tipo float e depois o imprima usando o
operador “%d”. Veja o que aconteceu.
*/

int main(void){
    float num = 0;
    printf("Digite um número fracionario: ");
    scanf("%f", &num);
    printf("Imprimindo: %d", num);
    return 0;
}

/*6) Faça um programa que leia um valor do tipo double e depois o imprima na forma
de notação científica.
*/

int main(void){
    double valor;
    printf("Insira um valor: ");
    scanf("%lf", &valor);
    printf("Numero em notacao cientifica: %.2E\n", valor);
    return 0;
}

/*7) Elabore um programa que leia um caractere e depois o imprima como um valor
inteiro.
*/

int main() {
    char caractere;

    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    printf("O valor ASCII do caractere '%c' e: %d\n", caractere, caractere);

    return 0;
}

/*8) Faça um programa que leia dois números inteiros e depois os imprima na ordem
inversa em que eles foram lidos.*/

int main(void){
    int num1 = 0, num2 =0;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Ordem inversa: %d , %d", num2,num1);
    return 0;
}

/*9)Faça um programa que leia dois valores do tipo float. Use um único comando de
leitura para isso. Em seguida, imprima os valores lidos na ordem inversa em que eles
foram lidos.*/

int main(void) {
    float valor1, valor2;
    printf("Digite dois valores decimais separados por espaco: ");
    scanf("%f %f", &valor1, &valor2);
    printf("Os valores lidos na ordem inversa sao: %.2f e %.2f\n", valor2, valor1);
    return 0;
}
/*10) Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano
(inteiros). Em seguida, imprima os valores lidos separados por uma barra (\).*/
int main(void){
    int dia, mes, ano;
    printf("Digite o dia: ");
    scanf("%d", &dia);
    printf("Digite o mes: ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);
    printf("\nA data digitada eh: %d/%d/%d\n", dia, mes, ano);
    return 0;
}


/*11) Elabore um programa que contenha uma constante qualquer do tipo float. Use o
comando #define. Imprima essa constante.*/

int main(void){
    #define pi 3.14
    printf("O valor de Pi e: %.2f", pi);
    return 0;
}

/*12) Elabore um programa que contenha uma constante qualquer do tipo int. Use o
comando const. Imprima essa constante.*/

int main(void){
    const int num = 5;
    printf("Numero da constante: %d", num);
    return 0;
}

/*13) Faça um programa que leia um caractere do tipo char e depois o imprima entre
aspas duplas. Assim, se o caractere lido for a letra A, deverá ser impresso “A”.*/
int main() {
    char caractere;

    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    printf("\"%c\"\n", caractere);

    return 0;
}

/*14)Faça um programa que leia três caracteres do tipo char e depois os imprima um
em cada linha. Use um único comando printf() para isso.*/

int main(void){
    char car_1, car_2, car_3;
    puts("Insira o primeiro caracter: ");
    scanf(" %c", &car_1);
    puts("Insira o segundo caracter: ");
    scanf(" %c", &car_2);
    puts("Insira o terceiro caracter: ");
    scanf(" %c", &car_3);
    printf("Primeiro caracter: %c\nSegundo Caracter: %c\nTerceiro Caracter: %c",car_1,car_2,car_3);
    return 0;
}

/*15) Escreva um programa que leia três variáveis: char, int e float. Em seguida, imprimaas
de três maneiras diferentes: separadas por espaços, por uma tabulação horizontal e
uma em cada linha. Use um único comando printf() para cada operação de escrita
das três variáveis.*/

int main(void){
    char caractere;
    int inteiro;
    float flutuante;

    printf("Digite um caractere, um numero inteiro e um numero flutuante, separados por espacos: ");
    scanf("%c %d %f", &caractere, &inteiro, &flutuante);

    printf("%c %d %f\n", caractere, inteiro, flutuante);

    printf("%c\t%d\t%f\n", caractere, inteiro, flutuante);

    printf("%c\n%d\n%f\n", caractere, inteiro, flutuante);

    return 0;
}