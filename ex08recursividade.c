// Online C compiler to run C program online
#include <stdio.h>

void inverter(char v[], int tamanho);
void inverter(char v[], int tamanho){
    if(tamanho>0){
        printf("%c", v[tamanho-1]);
        inverter(v, tamanho-1);
    }
}

int main() {
   char v[5] = {"caike"};
   int tamanho = 5;
   inverter(v, tamanho);
}
