#include <bits/stdc++.h>

using namespace std;

vector<int> acerto(3);


int main(){

    int N;
    scanf("%d", &N);
    vector<int>casco(3);
    for(int i= 0; i < 3; i++){ casco[i] = i;}

    for(int i = 0; i < N; i++){
        int a,b,g;

        scanf("%d", &a);
        scanf("%d",&b);
        scanf("%d",&g);

        a--;
        b--;
        g--;
        swap(casco[a], casco[b]);
        acerto[casco[g]]++;
    }

    int resposta = max({casco[0],casco[1],casco[2]});
    cout <<"Resposta: "<< resposta<< endl;
}