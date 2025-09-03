#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int popcount(long long aux){
    int contador = 0;
    while(aux > 0){
        if((aux & 1) == 1){
            contador++;
        }
        aux = aux >> 1;
    }
    return contador;
}
int main(){
    int t = 0;
    long long x = 0, y = 0;

    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> x;
        cin >> y;
        long long resultadoXor = x ^ y;
        cout << popcount(resultadoXor) << endl;
    }
}