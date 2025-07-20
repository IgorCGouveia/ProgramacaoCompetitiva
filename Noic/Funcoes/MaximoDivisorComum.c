#include <stdio.h>

int mdc(int a, int b){

    if(b<a){
        int temp = a;
        a = b;
        b = temp;
    }
    
    int r = a%b;
    if(r == 0 ) return b;

    return mdc(b,r);
}

int main(){
    printf("%d",mdc(756,484));

}