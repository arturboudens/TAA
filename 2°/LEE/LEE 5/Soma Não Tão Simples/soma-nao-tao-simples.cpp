#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 0; cin >> n;
    int soma = 0; cin >> soma;
    

    vector<int> numeros(n);

    for(int i = 0; i < n; i++){
        cin >> numeros[i];
    }

    bool encontrado = false;
    tuple<int, int, int> valores;

    for(int i = 0; i < n; i++){
        int a = numeros[i];

        int soma1 = soma - a;
        unordered_set<int> vistos;

        for(int j = i + 1; j < n; j++){
            int b = numeros[j];

            int comp = soma1 - b;
            
            if(vistos.count(comp)){
                encontrado = true;
                valores = make_tuple(a, b, comp);
                break;
            }
            vistos.insert(b);
        }

        if(encontrado) break;
    }

    if(encontrado){
        cout << get<0>(valores) << " " << get<1>(valores) << " " << get<2>(valores) << endl; 
    }
    else{
        cout << "Nao existe" << endl;
    }

    return 0;
}