#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <unordered_set>

using namespace std;

void check(){
    int n = 0;
    long long s = 0;

    cin >> n;
    
    vector<int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    cin >> s;

    unordered_set<int> vistos;
    bool encontrado = false;

    for(int vAtual : v){
        long long comp = s - vAtual;

        if(vistos.count(comp)){
            encontrado = true;
            break;
        }

        vistos.insert(vAtual);
    }

    if(encontrado){
        cout << "SIM\n";
    }
    else{
        cout << "NAO\n";
    }

    
}
int main (){
    
    int t = 0;
    
    cin >> t;

    while(t--){
        check();
    }
    return 0;
}