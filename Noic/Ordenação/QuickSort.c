#include <stdio.h>
#include<stdlib.h>

#define MAXN 10000
int v[MAXN],n;

int comparar(const void* a, const void* b){
    return *(int*)a - *(int*)b;
}

int main(){
    scanf("%d",&n);

    for(int i =0; i <n;i++){

        scanf("%d", &v[i]);
    }

    qsort(v,n,sizeof(int), comparar);

    for(int i= 0;i<n;i++) printf("%d-", v[i]);
    printf("\n");

    
}