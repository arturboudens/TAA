#include <bits/stdc++.h>

using namespace std;

int main(){
    int a = 0;
    cin >> a;

    stack<string> sonhos;

    for(int i = 0; i < a; i++){
        string estado;
        string pessoa;

        cin >> estado;

        if(estado == "infiltrar"){
            cin >> pessoa;
            sonhos.push(pessoa);
        }
        else if(estado == "chute"){
            if(!sonhos.empty()){
                sonhos.pop();
            }
        }
        else if(estado == "totem"){
            if(sonhos.empty()){
                cout << "acordado" << endl;
           } 
           else{
                cout << "dentro do sonho de " << sonhos.top() << endl;
           }
        }
    }

    return 0;
}