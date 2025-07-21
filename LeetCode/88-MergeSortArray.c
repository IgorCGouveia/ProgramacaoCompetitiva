#include <stdio.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i,j,k;
    i = m -1;
    j = n-1;
    k = m+n-1;
    //ordenar da direita para esquerda para evitar comandos extras desnecessarios e perda de dados
    while(i>= 0 && j>= 0){
        if(nums1[i] > nums2[j]){
            nums1[k] = nums1[i];
            i--;
        }else{
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }

    while(j>=0){
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}


int main(){
    int arr1[6] = {1,2,3,0,0,0};
    int arr2[3] = {2,5,6};

    merge(arr1, 6, 3, arr2, 3, 3);

    for(int i = 0; i < 6; i++){
        printf("%d", arr1[i]);
    }

    printf("\n");
}