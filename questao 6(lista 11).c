#include <stdio.h>
#include <string.h>

int main() {
    char nome[5][50];
    float nota[5];
    int i, j;
    float aux;
    char naux[50];

    for (i = 0; i < 5; i++) {
        printf("Nome %d = ", i + 1);
        scanf("%49s", nome[i]);
        printf("Nota %d = ", i + 1);
        scanf("%f", &nota[i]);
    }

    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (nota[i] < nota[j]) {
                aux = nota[i];
                nota[i] = nota[j];
                nota[j] = aux;

                strcpy(naux, nome[i]);
                strcpy(nome[i], nome[j]);
                strcpy(nome[j], naux);
            }
        }
    }

    for (i = 0; i < 5; i++) {
        printf("%s : %.2f\n", nome[i], nota[i]);
    }

    return 0;
}
