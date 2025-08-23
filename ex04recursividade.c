#include <stdio.h>

void binario(int n);
int main(){
    int n = 10;
    binario(n);
    printf("\n");
    return 0;
}
void binario(int n){
    if(n==0){
        printf("0");
        return;
    }
    if(n==1){
        printf("1");
    }else if(n % 2 == 0){
        binario(n/2);
        printf("0");
    }else{
        binario(n/2);
        printf("1");
    }
}
