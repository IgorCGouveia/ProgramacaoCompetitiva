#include <stdio.h>


int main(){
    int N;
    scanf("%d", &N);
   

    int v[N];
    for(int i = 0; i < N;i++){
        scanf("%d", &v[i]);
    }
    printf("vetor:\n");
    for(int i = 0; i < N; i++){
        if(i == 0){
            int aux = v[i]+ v[i+1];
            printf("%d\n", aux);
        }else if(i == N-1){
            int aux = v[i-1]+ v[i];
            printf("%d\n", aux);
        }
        else{
        int aux = v[i-1]+ v[i]+ v[i+1];
        printf("%d\n", aux);
        }
        
    }
}
 