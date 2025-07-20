#include <stdio.h>

    int m [3][3];

int main(){

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &m[i][j]);
        }
    }
    

    for(int j = 0; j < 3; j++){
        int soma =0;
        for(int i = 0; i<3; i++){
            soma += m[i][j];
            
        }
        printf("%d", soma);
    }


}