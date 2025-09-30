#include <bits/stdc++.h>

using namespace std;


bool checkPrimo(int contador){
    if(contador < 2){
        return false;
    }

    if(contador == 2){
        return true;
    }

    if(contador % 2 == 0){
        return false;
    }

    int lim = sqrt(contador);

    for(int i = 3; i <= lim; i += 2){
        if(contador % i == 0) return false;
    }

    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 0;
    int contador = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        long long v = 0;
        cin >> v;
        
        contador = __builtin_popcountll(v);

        if(checkPrimo(contador)){
            cout << v << " eh um pribit" << endl;
        }
        else{
            cout << v << " nao eh um pribit" << endl;
        }
    }
}