#include <bits/stdc++.h>

using namespace std;

int main(){
    int a = 0; cin >> a;
    set<string> itens;

    while(a--){
        int p = 0; cin >> p;
        for(int i = 0; i < p; i++){
            string item;
            cin >> item;

            if(!itens.count(item)){
                itens.insert(item);
                cout << "adicionando " << item << endl;
            }
            else{
                cout << item << " ja tem" << endl;
            }
        }
    }

    cout << "Itens do churrasco:" << endl;
    for(string item: itens){
        cout << item << endl;
    }
    return 0;
}