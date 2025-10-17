#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t = 0;
 
    cin >> t;
 
    while(t--){
        int n = 0;
        cin >> n;
 
        vector<string> palavras (n);
 
        for(int i = 0; i < n; i++){
            cin >> palavras[i];
        }
 
        while(true){
            bool troca = false;
            string aux = "";
 
            for(int i = 0; i < n - 1; i++){
                if(palavras[i].length() > palavras[i + 1].length()){
                    aux = palavras[i + 1];
                    palavras[i + 1] = palavras[i];
                    palavras[i] = aux;
 
                    troca = true;
                }
 
            }
 
            if(troca == false){
                break;
            }
        }
        
        for(int j = 0; j < palavras.size(); j++){
            if(j == palavras.size() - 1){
                cout << palavras[j] << endl;
            }
            else{
                cout << palavras[j] << " ";
            }
        }
    }
}