#include <stdio.h>

#define MAXN 1010

int n, v[MAXN], menor, menorIdx;


int main(){
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);

    }

    for(int i = 0; i < n; i++){

        menorIdx = i;


        for(int j = i +1; j<n;j++){
            if(v[j] < v[menorIdx]){
                menorIdx = j;
                }
        }
        menor = v[menorIdx];
        v[menorIdx] = v[i];
        v[i] = menor; 
    }

    for(int i = 0; i< n; i++){
        printf("%d-", v[i]);
    }
    printf("\n");
}