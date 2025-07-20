#include <stdio.h>

#define MAXN 1010
int v[MAXN], n,a ,b;

void bubble_sort(){
 
    int ordenado=0;
     
    while(ordenado==0){
        ordenado=1;
         
        for(int i=0; i<n-1; i++)
            if(v[i]>v[i+1]){
                
				
                int tmp=v[i];
                v[i]=v[i+1];
                v[i+1]=tmp;
                
				ordenado=0;
            }
    }
}



int main(){

    scanf("%d", &n);

    for(int i = 0; i< n; i++){
        scanf("%d",&v[i]);
    }

    bubble_sort();

   for(int i = 0; i< n; i++){
        printf("%d",v[i]);
    }
    printf("\n");

}