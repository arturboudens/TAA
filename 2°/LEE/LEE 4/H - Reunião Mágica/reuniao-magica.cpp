#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int t = 0; cin >> t;

    while(t--){
        set<char> cartasDuplicadas;
        string r, s;
        set<char> setS;

        cin >> r >> s;

        for(char carta : s){
            setS.insert(carta);
        }
        for(char cartasEmR : r){
            if(setS.count(cartasEmR)) cartasDuplicadas.insert(cartasEmR);
        }

        if(cartasDuplicadas.empty()){
            cout << "Baralhos prontos para o duelo" << endl;
        }
        else{
            for(char letra : cartasDuplicadas){
                cout << letra;
            }
            cout << endl;
        }
    }
}