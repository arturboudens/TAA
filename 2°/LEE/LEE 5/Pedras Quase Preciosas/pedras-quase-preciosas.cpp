#include <bits/stdc++.h>

using namespace std;

int main(){
    int t = 0;
    cin >> t;

    while(t--){
        int contador = 0;
        set<char> catalogo;

        string catalogo2;
        cin >> catalogo2;

        for(char c : catalogo2){
            catalogo.insert(c);
        }

        string pedras;
        cin >> pedras;

        for(char pedra_aceita : pedras){
            if(catalogo.count(pedra_aceita)) contador++;
        }

        cout << "Contem " << contador << " pedras negociaveis" << endl;
    }
}