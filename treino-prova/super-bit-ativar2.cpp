/*
int main() {
   tuple<int, double, char, string> t1 = {1, 2.5, 'a', "IDP"};

    cout << "Acessando com get:" << endl;
    
    // Acessando o primeiro elemento (índice 0)
    int primeiro_elemento = get<0>(t1);
    cout << "Indice 0: " << primeiro_elemento << endl;
*/


#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 0;
    int b = 0;
    
    cin >> n >> b;

    for(int i = 0; i < n; i++){
        int v = 0;

        cin >> v;

        v |= (1 << b);

        cout << v << "\n";
    }

    return 0;
}