#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int acoes = 0; cin >> acoes;

    priority_queue<pair<pair<int, int>, string>> fomes;
    map<string, pair<int, int>> digimons;
    vector<string> alimentados;
    int tempo = 0;

    while(acoes--){
        tempo++;
        string acao;
        cin >> acao;

        if(acao == "CHEGA"){
            string nome;
            int fome;

            cin >> nome;
            cin >> fome;

            int tempoOriginal = -tempo;
            fomes.push({{fome, tempoOriginal}, nome});
            digimons[nome] = {fome, tempoOriginal};

        }
        else if(acao == "FOME"){
            string nome; cin >> nome;
            int aumentoFome; cin >> aumentoFome;

            if(digimons.count(nome)){
                digimons[nome].first += aumentoFome;
                
                int novaFome = digimons[nome].first;
                int tempoOriginal = digimons[nome].second;

                fomes.push({{novaFome, tempoOriginal}, nome});
            }
        }
        else if(acao == "SAI"){
            string nome; cin >> nome;
            
            if(digimons.count(nome)){
                digimons.erase(nome);
            }
        }
        else{
            while(!fomes.empty()){
                string nomeAtual = fomes.top().second;
                int fomeAtual = fomes.top().first.first;

                if(!digimons.count(nomeAtual)){
                    fomes.pop();
                    continue;
                }
                
                if(digimons[nomeAtual].first != fomeAtual){
                    fomes.pop();
                    continue;
                }

                alimentados.push_back(nomeAtual);
                fomes.pop();
                digimons.erase(nomeAtual);
                break;
            }
        }
    }

    for(int i = 0; i < alimentados.size(); i++){
        cout << alimentados[i] << endl;
    }

    return 0;
}