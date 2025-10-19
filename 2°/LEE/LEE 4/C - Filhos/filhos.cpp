#include <bits/stdc++.h>

using namespace std;

int main(){
    int c = 0, n = 0; cin >> n; cin >> c;

    if(n == 1){
        cout << "NULL" << endl;
        return 0;
    }
    vector<int> arvore(n + 1);

    arvore[0] = 0;

    for(int i = 1; i <= n; i++){
        cin >> arvore[i];
    }

    deque<int> nos;

    for(int i = 0; i < c; i++){
        int no_atual = 0;
        cin >> no_atual;

        nos.push_back(no_atual);
    }

    for(int i = 0; i < c; i++){
        int indiceE = nos[i] * 2;
        int indiceD = (2 * nos[i] + 1);
        
        if(indiceE <= n){
            if(arvore[indiceE] != -1){
                cout << arvore[indiceE] << " ";
            }
            else{
                cout << "NULL ";
            }
        }else{
            cout << "NULL ";
        }

        if(indiceD <= n){
            if(arvore[indiceD] != -1){
                cout << arvore[indiceD] << endl;
            }
            else{
                cout << "NULL" << endl;
            }
        }
        else{
            cout << "NULL" << endl;
        }
    }
}