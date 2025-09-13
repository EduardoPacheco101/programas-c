#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float expo(float a, int b);
float raizis(float a);
char cabeca(void);
void tia_da_limpeza(void);
char pedir_SN(const char *prompt);

int main(void){
    char repeat = 'S';
    float num_ero, exponen, raiz, noname;
    int num_aro;

    while (1){
        char cab = cabeca();

        switch (cab)
        {
        case '1':
            printf("Digite o valor de X: ");
            if (scanf("%f", &num_ero) != 1) {
                printf("Entrada invalida para X.\n");
                tia_da_limpeza();
                break;
            }
            tia_da_limpeza();

            printf("Digite o valor de Y: ");
            if (scanf("%d", &num_aro) != 1) {
                printf("Entrada invalida para Y.\n");
                tia_da_limpeza();
                break;
            }
            tia_da_limpeza();

            exponen = expo(num_ero, num_aro);
            printf("O resultado e: %.2f\n", exponen);
            break;

        case '2':
            printf("Digite o valor para raiz quadrada: ");
            if (scanf("%f", &raiz) != 1) {
                printf("Entrada invalida.\n");
                tia_da_limpeza();
                break;
            }
            tia_da_limpeza();
            if (raiz < 0.0f) {
                printf("Erro: nao existe raiz quadrada real de numero negativo.\n");
            } else {
                noname = raizis(raiz);
                printf("O resultado e: %.2f\n", noname);
            }
            break;

        case '3': {
            float v;
            printf("Digite o valor para raiz cubica: ");
            if (scanf("%f", &v) != 1) {
                printf("Entrada invalida.\n");
                tia_da_limpeza();
                break;
            }
            tia_da_limpeza();
            printf("O resultado e: %.2f\n", cbrt(v));
            break;
        }

        case '4': {
            float ang;
            printf("Digite o angulo em graus: ");
            if (scanf("%f", &ang) != 1) {
                printf("Entrada invalida.\n");
                tia_da_limpeza();
                break;
            }
            tia_da_limpeza();
            #ifndef M_PI
            #define M_PI 3.14159265358979323846
            #endif
            printf("O resultado e: %.2f\n", sin(ang * M_PI / 180.0));
            break;
        }

        default:
            break;
        }

    
        repeat = pedir_SN("\nDeseja fazer mais uma operacao? (S/N): ");
        if (repeat == 'N' || repeat == 'n') {
            printf("Encerrando a calculadora. Ate mais!\n");
            break;
        }
        printf("\n");
    }

    return 0;
}

char cabeca(){
    char num = 0;
    do {
        printf("#######################################\n");
        printf("#             CALCULADORA             #\n");
        printf("#######################################\n");
        printf("# ->DIGITE 1 PARA EXPONENCIAR X POR Y #\n");
        printf("# ->DIGITE 2 PARA RAIZ QUADRADA       #\n");
        printf("# ->DIGITE 3 PARA RAIZ CUBICA         #\n");
        printf("# ->DIGITE 4 PARA SENO                #\n");
        printf("#######################################\n");
        printf("  -> Digite aqui: ");

       
        if (scanf(" %c", &num) != 1) {
            tia_da_limpeza();
            num = 0;
        } else {
           
            tia_da_limpeza();
        }

        if (num < '1' || num > '4') {
            printf("Opcao invalida! Tente novamente.\n\n");
        }

    } while (num < '1' || num > '4');

    return num;
}


void tia_da_limpeza(void){
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}

char pedir_SN(const char *prompt) {
    char r = 0;
    while (1) {
        printf("%s", prompt);
        if (scanf(" %c", &r) != 1) {
            tia_da_limpeza();
            continue;
        }
        tia_da_limpeza();
        if (r == 'S' || r == 's' || r == 'N' || r == 'n') return r;
        printf("Entrada invalida. Digite S ou N.\n");
    }
}

float raizis(float a){
    return sqrt(a);
}

float expo(float a, int b){
    return pow(a,b);
}
