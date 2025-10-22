#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n = 0; cin >> n;

    while(n--){
        set<char> letras;
        string w;

        cin >> w;

        for(char letrasW : w){
            letras.insert(letrasW);
        }
        if(letras.size() == w.length()){
            cout << "STRONGRAMA" << endl;
        }
        else{
            cout << "WEAKORD" << endl;
        }
    }
}