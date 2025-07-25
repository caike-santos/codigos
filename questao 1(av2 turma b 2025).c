#include <stdio.h> // Adicionado para a função printf funcionar

void funcao1(int x[], int y) {
    int i;
    for (i = 0; i < y; i++) {
        printf("%d ", x[i]);
    }
    printf("\n\n");
}

void funcao2(int x[], int y) {
    int a, b, c;
    for (a = y - 1; a > 0; a--) {
        for (b = 0; b < a; b++) {
            if (x[b] > x[b + 1]) {
                c = x[b];
                x[b] = x[b + 1];
                x[b + 1] = c;
            }
        }
    
    funcao1(x, y);
}
    
}

void main() {
    int v[5] = {7, 1, 6, 0, 2};
    funcao1(v, 5);
    funcao2(v, 5);
}
