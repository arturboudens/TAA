#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
using ull = unsigned long;
 
int main(){
 
    int f; cin >> f;
    cin.ignore();
 
    while(f--){
        string frase; 
        getline(cin, frase);
 
        vector<char> trocada(frase.length());
 
        for(int i = 0; i < frase.length(); i++){
            if(frase[i] == 'r'){
                trocada[i] = 'l';
            }
            else if(frase[i] == 'R'){
                trocada[i] = 'L';
            }
            else{
                trocada[i] = frase[i];
            }
        }
 
        for(size_t i = 0; i < frase.size(); i++){
            if(i == trocada.size() - 1){
                cout << trocada[i] << endl;
            }
            else{
                cout << trocada[i];
            }
        }
    }
 
    return 0;
}