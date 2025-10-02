#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
using ull = unsigned long long;
 
int main(){
    int nb = 0;
 
    cin >> nb;
 
    while(nb--){
        ull a = 0, b = 0;
 
        cin >> a >> b;
 
        ull atributos = a & b;
 
        ull poder = __builtin_popcountll(atributos);
 
        cout << poder << endl;
 
    }
 
    return 0;
}