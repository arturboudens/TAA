#include <bits/stdc++.h>

using namespace std;

int main()
{
    string d = "1";
    string direcao;

    queue<string> fila_n;
    queue<string> fila_s;
    queue<string> fila_l;
    queue<string> fila_o;
    vector<string> pousos;

    while(d != "0"){
        cin >> d;

        if(d != "0"){    
            if(d == "N" || d == "S" || d == "L" || d == "O"){
                direcao = d;
            }
            else{
                if(direcao == "N"){
                    fila_n.push(d);
                }
                else if(direcao == "S"){
                    fila_s.push(d);
                }
                else if(direcao == "L"){
                    fila_l.push(d);
                }
                else if(direcao == "O"){
                    fila_o.push(d);
                }
            }
        }
    }

    while(!fila_n.empty() || !fila_s.empty() || !fila_l.empty() || !fila_o.empty()){
        if(!fila_n.empty()){
            pousos.push_back(fila_n.front());
            fila_n.pop();
        }
        if(!fila_s.empty()){
            pousos.push_back(fila_s.front());
            fila_s.pop();
        }
        if(!fila_l.empty()){
            pousos.push_back(fila_l.front());
            fila_l.pop();
        }
        if(!fila_o.empty()){
            pousos.push_back(fila_o.front());
            fila_o.pop();
        }
    }

    for(int i = 0; i < pousos.size(); i++){
        if(i == pousos.size() - 1){
            cout << pousos[i] << endl;
        }
        else{
            cout << pousos[i] << " ";
        }
    }
}