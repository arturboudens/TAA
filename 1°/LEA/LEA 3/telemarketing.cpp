#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int chamadas = 0, intervalo = 0;

    cin >> chamadas >> intervalo;

    deque<long long> ligacoes;

    for(int i = 0; i < chamadas; i++){
        long long input = 0;
        cin >> input;

        ligacoes.push_back(input);

        while(!ligacoes.empty() && ligacoes.front() < input - intervalo){
            ligacoes.pop_front();
        }

        if(i > 0){
            cout << " ";
        }
        cout << ligacoes.size();
    }

    cout << endl;

    return 0;
}