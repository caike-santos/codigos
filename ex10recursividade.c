// Online C compiler to run C program online
#include <stdio.h>

void remover(char v[], int tamanho, char ch);
void remover(char v[], int tamanho, char ch){
    if(tamanho>0){
       if(v[tamanho-1] != ch){
           remover(v, tamanho-1, ch);
           printf("%c", v[tamanho-1]);
       }else{
           remover(v, tamanho-1,ch);
       }
}
}
int main() {
    char v[5] = {"caike"};
   int tamanho = 5;
   char ch = 'i';
   remover(v, tamanho, ch);
   
   }

   
