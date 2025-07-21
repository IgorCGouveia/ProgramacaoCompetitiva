#include <stdio.h>
//algoritmo de boyer-moore voting
int majorityElement(int* nums, int numsSize) {


    int i, candidato = -1, votos =0;
    for(i=0; i< numsSize;i++){
        if(votos == 0){
            candidato = nums[i];
            votos = 1;
        }else{
            if(nums[i] == candidato){
                votos++;
            }else{
                votos--;
            }
        }
    }

    int cont= 0;

    for(i = 0; i < numsSize; i++){
        if(nums[i] == candidato){
            cont++;
        }
    }
    if(cont > numsSize/2){
        return candidato;
    }else{
        return -1;}
}


int main(){
    int arr[] = {2,2,1,1,1,2,2};

    int moda = majorityElement(arr, 7);

   

    printf("%d\n", moda);
}