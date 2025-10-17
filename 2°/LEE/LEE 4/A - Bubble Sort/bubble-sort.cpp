#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 0;

    cin >> n;

    vector<int> vetor(n);

    for(int i = 0; i < n; i++){
        cin >> vetor[i];
    }

    for(int j = 0; j < vetor.size(); j++){
        if(j == vetor.size() - 1){
            cout << vetor[j] << endl;
        }
        else{
            cout << vetor[j] << " ";
         }
    }

    while(true){
        bool troca = false;
        int aux = 0;

        for(int i = 0; i < n - 1; i++){
            if(vetor[i] > vetor[i + 1]){
                
                aux = vetor[i + 1];
                vetor[i + 1] = vetor[i];
                vetor[i] = aux;

                for(int j = 0; j < vetor.size(); j++){
                    if(j == vetor.size() - 1){
                        cout << vetor[j] << endl;
                    }
                    else{
                        cout << vetor[j] << " ";
                    }
                }

                troca = true;
            }
        }

        

        if(troca == false){
            break;
        }
    }
}