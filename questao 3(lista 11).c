#include <stdio.h>

int main() {
    int vetA[10], vetB[10];
    int i;

    for (i = 1; i <= 10; i++) {
        int index = i - 1;
        vetB[index] = 0;

        if (i % 2 == 0) {
            vetA[index] = i;
        } else {
            vetA[index] = 2 * i;
        }
    }

    for (i = 1; i <= 10; i++) {
        int index = i - 1;

        while (vetA[index] > i) {
            vetB[index] = vetA[index];
            vetA[index]--;
        }
    }

    printf("Valores finais dos vetores:\n");
    printf("--------------------------\n");
    for (i = 0; i < 10; i++) {
        printf("vetA[%d] = %d\t | vetB[%d] = %d\n", i, vetA[i], i, vetB[i]);
    }

    return 0;
}
