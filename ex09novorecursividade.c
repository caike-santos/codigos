#include <stdio.h>
int pa(int v[], int n);
int pa(int v[], int n){
    if(n==2){
        return v[n-1] - v[n-2];
    }
    int razao;
        razao = v[n-1] - v[n-2];
        if(razao == 0){
            razao++;
        }
        if(razao == pa(v, n-1)){
            return razao;
        }else{
            return 0;
        }
}
int main() {
    int v[] = {10, 9, 8, 7, 6};
    int n = 5;
    
    if(pa(v, n) == 0){
        printf("nao eh pa");
    }else{
        printf("eh pa");
    }

    return 0;
}