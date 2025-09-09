#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int ehPrimo(int contador){
    if(contador < 2){
        return 0;
    }
    if(contador == 2){
        return 1;
    }
    if(contador % 2 == 0){
        return 0;
    }

    int lim = sqrt(contador);

    for(int i = 3; i <= lim; i += 2){
        if(contador % i == 0) return 0;
    }
    
    return 1;

}
void pribit(){

    long long v = 0;

    cin >> v;

    int contador = 0;
    long long vAux = v;

    while(vAux > 0){
        if((vAux & 1) == 1) contador++;
        vAux = vAux >> 1;
    }

    if(ehPrimo(contador)){
        cout << v << " eh um pribit" << endl;
    }
    else {
        cout << v << " nao eh um pribit" << endl;
    }
}
int main(){
    int n = 0;

    cin >> n;
    
    while(n--){
        pribit();
    }

    return 0;

}