#include <stdio.h>

#define MAXN 10000
int v[MAXN], n;

int swap(int* a, int* b);


int particao(int arr[], int low, int high){

    int pivo = arr[high];

    int i= low-1;

    for(int j = low; j <= high-1; j++){
        if(arr[j] < pivo){
            i++;
            swap(&arr[i], &arr[j]);

        }
    }

    swap(&arr[i+1], &arr[high]);
    return i +1;
}


int QuickSort(int arr[], int low, int high){
    if(low < high){
        int pi = particao(arr, low, high);

        QuickSort(arr, low, pi -1);
        QuickSort(arr, pi +1, high);
    }
}


int swap(int* a, int* b){
    int t = *a;
    *a=*b;
    *b=t;
}



int main(){
    scanf("%d", &n);

    for(int i =0; i<n; i++){
        scanf("%d", &v[i]);
    }

    QuickSort(v,0,n-1);

    for(int i =0; i<n; i++){
        printf("%d-", v[i]);
    }
    printf("\n");

}