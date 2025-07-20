#include <stdio.h>

int main(){
    int N;
    printf("Bote o tamanho da matriz quadrada: ");
    scanf("%d", &N);
    int m[N][N];
    //ler o valores
    for (int i =0; i < N; i++){
        for(int j =0; j<N;j++){
            scanf("%d", &m[i][j]);
        }
    }

    int diagP=0,diagS=0;

    //diagonal principal
    for(int i =0; i < N; i++){
        
        diagP += m[i][i];
    }

    // diagonal secundaria
    for (int j = N-1; j >= 0; j--)
        {
            
            diagS += m[(N-1)-j][j];
        }

        printf("Primaria: %d\n",diagP);
        printf("Secundaria: %d\n",diagS);


}