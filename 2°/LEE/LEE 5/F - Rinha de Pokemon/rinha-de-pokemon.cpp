#include <bits/stdc++.h>

using namespace std;

int main(){
    int p = 0; cin >> p;

    priority_queue<pair<int, string>> pokemon;

    for(int i = 0; i < p; i++){
        string nomePokemon; cin >> nomePokemon;
        int poderPokemon; cin >> poderPokemon;

        pokemon.push({poderPokemon, nomePokemon});
    }

    while(pokemon.size() > 1){
        pair<int, string> pokemon1 = pokemon.top();
        pokemon.pop();

        pair<int, string> pokemon2 = pokemon.top();
        pokemon.pop();

        cout << pokemon1.second << " " << "(" << pokemon1.first << ")" << " x " << "(" << pokemon2.first << ")" << " " << pokemon2.second << " : ";

        if(pokemon1.first > pokemon2.first){
            pokemon1.first -= pokemon2.first;
            cout << pokemon1.second << " venceu" << endl;
            pokemon.push(pokemon1);
        }
        else if(pokemon1.first < pokemon2.first){
            pokemon2.first -= pokemon1.first;
            cout << pokemon2.second << " venceu" << endl;
            pokemon.push(pokemon2);
        }
        else{
            cout << "empate" << endl;

            if(pokemon.size() == 0){
                cout << "nenhum vencedor" << endl;
                return 0;
            }
        }
    }

    cout << pokemon.top().second << " venceu com " << pokemon.top().first << endl;
}