#include <stdio.h>

int comum(char v[], char v1[], int tam, int i, int cont, int j);
int comum(char v[], char v1[], int tam, int i, int cont, int j){
    if(tam>0){
    if(i<j){
        if(v[tam-1] == v1[i]){
            comum(v, v1, tam, i+1, cont+1, j);
        }else{
            comum(v, v1, tam, i+1, cont, j);
        }
    }else{
        comum(v, v1, tam-1, i=0, cont, j);
    }
    }else {
        return cont;
    }
    
}
int main() {
     int tam = 5;
    char v[5] = {"caike"};
    char v1[5] = {"kaiki"};
    int i = 0, cont = 0, j = tam;
    
    printf("%d", comum(v, v1, tam, i, cont, j));
    return 0;
}

#include <stdio.h>

int comum(char v[], char v2[], int tam, int i);
int comum(char v[], char v2[], int tam, int i){
    if(tam>0){
    if(i<tam){
        if(v[tam-1] == v[i]){
            v2[i] = v[tam-1];
            return comum(v, v2, tam, i+1);
        }
    }else{
        return comum(v, v2, tam-1, i=0);
    }
    }else{
        return v2[];
    }
}
    int main() {
     int tam = 5;
    char v[5] = {"caike"};
    char v2[5];
    int i = 0;
    
    printf("%c", comum(v, v2, tam, i));
    
}