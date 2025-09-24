#include <bits/stdc++.h>

using namespace std;

void escavacao(){

    int contadorGemas = 0;
    string pedra;
    cin >> pedra;

    stack<char> gemas;

    for(int i = 0; i < pedra.length(); i++){
        if(pedra[i] == '<'){
            gemas.push(pedra[i]);
        }
        else{
            if(!gemas.empty()){
                if(gemas.top() == '<' && pedra[i] == '>'){
                    contadorGemas++;
                    gemas.pop();
                }
            }
        }
    }
    cout << contadorGemas << endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 0;

    cin >> n;

    while(n--){
        escavacao();
    }

    return 0;
}