#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t = 0;
    cin >> t;

    while(t--){
        set<pair<int,string>> alunos; 
    
        int erros = 0, l = 0;
        cin >> l;

        while(l--){
            int matricula = 0;
            string materia = " ";

            cin >> matricula >> materia;

            pair<int, string> alunoAtual = {matricula, materia};

            if(alunos.count(alunoAtual)){
                erros++;
            }
            else{
                alunos.insert(alunoAtual);
            }
        }

        if(erros != 0){
            cout << "Corrompido com " << erros << " erros(s)" << endl;
        }
        else{
            cout << "Arquivo OK" << endl;
        }
    }
}