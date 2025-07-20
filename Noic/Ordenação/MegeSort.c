#include<stdio.h>

    #define MAXN 1010
    int v[MAXN], aux[MAXN], n;

void MergeSort(int inicio, int fim){
        if(inicio == fim) return;

        MergeSort(inicio, (inicio+fim)/2);
        MergeSort((inicio+fim)/2+1, fim);

        int tam = 0;
        int j= (inicio + fim)/2+1;

        for(int i = inicio; i <= (inicio+fim)/2; i++){

                while(j <= fim && v[j] < v[i]){
                    aux[tam] = v[j];
                    tam++;
                    j++;
                }
                aux[tam] = v[i];
                tam++;
        }

        while (j <= fim){
            aux[tam] = v[j];
            j++;
            tam++;
        }

        for(int i = inicio; i <= fim; i++){
            v[i] = aux[i-inicio];
        }
        
}




int main(){
    
    scanf("%d",&n);

    for(int i = 0; i<n; i++) scanf("%d", &v[i]);

    MergeSort(0,n-1);

    for(int i = 0; i<n; i++) printf("%d-", v[i]);

    printf("\n");
}