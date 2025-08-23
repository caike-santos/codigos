#include <stdio.h>

void pg(int n, int a, int q);
int main(){
    int n = 5, a = 2, q = 3;
    pg(n, a, q);
    return 0;
}
void pg(int n, int a, int q){
    if(n == 0){
        return;
    }else{
        printf("%d\n", a);
        pg(n-1, a*q, q);
    }
}