#include <stdio.h>

void multiplos(int n, int v, int resul);
int main(){
    int n = 2, v = 10;
    multiplos(n, v, n);
}
void multiplos(int n, int v, int resul){
   if(resul>v){
    return;
   }else{
    printf("%d", resul);

    multiplos(n, v, resul + n);
   }
}