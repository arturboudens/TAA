#include <bits/stdc++.h>

using namespace std;

int main(){
    int t = 0;

    cin >> t;

    while(t--){
        int n = 0;
        int zeros = 0;
        int negativos = 0;

        cin >> n;

        vector<int> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];

            if(a[i] == 0){
                zeros++;
            }
            else if(a[i] == -1){
                negativos++;
            }
        }

        int operacoes = zeros;

        if(negativos % 2 != 0){
            operacoes += 2;
        }

        cout << operacoes << endl;

    }
}