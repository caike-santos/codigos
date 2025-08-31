#include <stdio.h>

int palin(char v[], int tam, int i);
int palin(char v[], int tam, int i){
    if(tam>1){
        if(v[tam-1] == v[i]){
            palin(v, tam-1, i+1);
        }else{
        return 1;
    }
    return 0;
    }
    
}
int main() {
     int tam = 5;
    char v[5] = {"arara"};
    int i = 0;
    
    if(palin(v, tam, i)==0){
        printf("eh palindromo");
    }else{
        printf("nao eh palindromo");
    }
    return 0;
}