#include <bits/stdc++.h>

using namespace std;

int main(){
    int m = 0; cin >> m;
    int c = 0; cin >> c;

    bitset<100001> valores_possiveis;
    valores_possiveis[0] = 1;

    for(int i = 0; i < c; i++){
        int v = 0; 
        cin >> v;
        valores_possiveis |= (valores_possiveis << v);
    }

    if(valores_possiveis[m]){
        cout << "SIM" << endl;
    }
    else{
        cout << "NAO" << endl;
    }

}