#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int c, l;
    if (!(cin >> c >> l)) return 0;

    vector<string> mapa(l);

    for(int i = 0; i < l; i++){
        cin >> mapa[i];
    }

    int lin = 0;
    int col = 0;
    char direcao = '>';
    int passos = 0;
    
    int limite = 200000; 

    while(true){
        if(lin < 0 || lin >= l || col < 0 || col >= c){
            cout << "Caminho nao encontrado!" << endl;
            return 0;
        }

        if(mapa[lin][col] == '*'){
            cout << "Caminho encontrado em " << passos << " passos!" << endl;
            return 0;
        }

        if(passos > limite){
            cout << "Caminho nao encontrado!" << endl;
            return 0;
        }

        char atual = mapa[lin][col];

        if(atual == '>') direcao = '>';
        else if(atual == '<') direcao = '<';
        else if(atual == 'v') direcao = 'v';
        else if(atual == '^') direcao = '^';
        
        if(direcao == '>') col++;
        else if(direcao == '<') col--;
        else if(direcao == 'v') lin++;
        else if(direcao == '^') lin--;

        passos++;
    }

    return 0;
}