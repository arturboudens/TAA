#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 0; cin >> n;
    int minIndex, count = 0;
    vector<int> numeros(n);

    for(int i = 0; i < n; i++){
        cin >> numeros[i];
    }

    while(true){
        bool troca = false;
        for(int i = 0; i < n - 1; i++){
            minIndex = i;
            for(int j = i + 1; j < n; j++){
                if(numeros[j] < numeros[minIndex]){
                    minIndex = j;
                }
            }
            if(minIndex != i){
                swap(numeros[i], numeros[minIndex]);
                troca = true;
                count++;
            }
        }

        if(troca == false){
            break;
        }
    }

    for(int k = 0; k < numeros.size(); k++){
        if(k == numeros.size() - 1){
            cout << numeros[k] << endl;
        }
        else{
            cout << numeros[k] << " ";
         }
    }

    cout << count << endl;
}