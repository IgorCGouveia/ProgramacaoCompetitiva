#include <stdio.h>


#define maxTam 1000000
int v[maxTam];

int main(){
    int tamAtual= 0, qtdOp;
    scanf("%d",&qtdOp);

    for(int i = 0; i < qtdOp; i++){
        int tipo;
        scanf("%d", &tipo);
        
        if(tipo == 0){
            int insere;
            scanf("%d", &insere);
            v[tamAtual] = insere;
            tamAtual++;
        }else{
            tamAtual--;
        }
    }
    for(int i = 0; i < tamAtual; i++){
        printf("%d-", v[i]);
    }

}