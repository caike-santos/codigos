#include <stdio.h>

int pa (int v[], int q);
int main(){
    int v[] = {2, 6, 18, 54};
    int q = 4, k;
    k = v[q-1] - v[q-2];
    if(k == pa(v, q)){
        printf("é pa");
    }else{
            printf("n é pa");
        }
}
int pa (int v[], int q){
    if(q == 2){
        return v[q-1] - v[q-2];
    }else{
        int k;
        k =  v[q-1] - v[q-2];
        if(k == pa(v, q-1)){
            return k;
        }else{
            return 0;
        }
    }
}
// pode melhorar 