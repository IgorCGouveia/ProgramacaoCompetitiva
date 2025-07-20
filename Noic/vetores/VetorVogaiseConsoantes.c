#include<stdio.h>
#include<string.h>

int main(){
    char S[56];
    scanf("%55s", S);

    int qtnd = strlen(S);
    printf("%d\n", qtnd);
    qtnd += 1;
    char V[qtnd];
    char C[qtnd];
    int idxV = 0,idxC = 0;
    for(int i =0; i < qtnd; i++){
        if(S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o'|| S[i] == 'u'){
            V[idxV] = S[i];
            idxV++;
        }else{
            C[idxC] = S[i];
            idxC++;
        }
        
    }
    V[idxV] = '\0';
    C[idxC] = '\0';
    printf("Vogais: %s\n", V);
    printf("Consoantes: %s\n", C);
}