#include <bits/stdc++.h>

using namespace std;

int main(){

    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    map<string, int> criminosos;

    while(true)
    {
        string nome; cin >> nome;
        int artigo; cin >> artigo;

        if(nome == "fim" && artigo == 0){
            return 0;
        }
    
    
        if(criminosos[nome] == 0){
            cout << nome << " eh reu primario" << endl;
        }
        else{
            cout << nome << " eh reincidente com " << criminosos[nome] << " crime(s)" << endl;
        }

        criminosos[nome]++;
           
    }
}