#include <bits/stdc++.h>

using namespace std;

int main(){
    int t = 0; cin >> t;

    while(t--){
        string r;
        string s;

        cin >> r;
        cin >> s;

        set<char> letrasR;
        set<char> letrasS;

        for(char letra  : r){
            letrasR.insert(letra);
        }

        for(char letra  : s){
            letrasS.insert(letra);
        }
        
        if(letrasR.size() == letrasS.size()){
            cout << "ANAGRAMAS" << endl;
        }
        else{
            cout << "DIFERENTES" << endl;
        }
    }

    return 0;
}