#include <stdio.h>
#include <string.h>
/*
int main(void) {
    char vet_1[45];
    char vet_2[sizeof vet_1];   // mesmo tamanho de vet_1, evita overflow
    int i, j = 0;

    printf("Digite uma frase: ");
    if (fgets(vet_1, sizeof vet_1, stdin) == NULL) {
        return 1; // erro de leitura
    }

    // remove o '\n' deixado por fgets, se houver
    vet_1[strcspn(vet_1, "\n")] = '\0';

    // uso de cast para int para evitar problemas com size_t (unsigned)
    for (i = (int)strlen(vet_1) - 1; i >= 0; i--) {
        vet_2[j++] = vet_1[i];
    }
    vet_2[j] = '\0'; // terminador de string

    printf("\nInvertida: %s\n", vet_2);
    return 0;
}
*/

