#include <stdio.h>

void contarFrequencia(int vetor[], int tamanho) {
    int visitado[tamanho];

    for (int i = 0; i < tamanho; i++) {
        visitado[i] = 0;
    }

    printf("Saída:\n");

    for (int i = 0; i < tamanho; i++) {
        if (visitado[i] == -1) {
            continue;
        }

        int contagem = 1;
        for (int j = i + 1; j < tamanho; j++) {
            if (vetor[i] == vetor[j]) {
                contagem++;
                visitado[j] = -1;
            }
        }
        

        if (contagem == 1) {
            printf("%d: %d vez\n", vetor[i], contagem);
        } else {
            printf("%d: %d vezes\n", vetor[i], contagem);
        }
    }
}

int main() {
    int vetor[] = {3, 5, 1, 3, 2, 5, 7, 3, 4, 7, 6, 1};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("Vetor = {3,5,1,3,2,5,7,3,4,7,6,1}\n\n");

    contarFrequencia(vetor, tamanho);

    return 0;
}
