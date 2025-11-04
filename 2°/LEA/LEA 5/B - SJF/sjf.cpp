#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 0;
    cin >> n;

    priority_queue<pair<int , string>> detentos;

    for(int i = 0; i < n; i++){
        string nome; cin >> nome;
        int tempo; cin >> tempo;

        detentos.push({tempo, nome});
    }

    while(!detentos.empty()){
        int tempo = detentos.top().first;
        string nome = detentos.top().second;

        detentos.pop();

        if(tempo <= 1){
            cout << nome << " " << tempo << endl;
        }
        else{
            cout << nome << " " << tempo << endl;
            tempo = tempo / 2;

            detentos.push({tempo, nome});
        }
    }

    return 0;
}