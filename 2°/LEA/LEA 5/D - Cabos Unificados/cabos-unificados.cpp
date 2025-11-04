#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n = 0; cin >> n;
    int custo = 0;

    priority_queue<int, vector<int>, greater<int>> cabos;

    for(int i = 0; i < n; i++){
        int valor = 0;
        cin >> valor;

        cabos.push(valor);
    }

    while(cabos.size() > 1){

        int cabo1 = cabos.top();
        cabos.pop();

        custo += cabos.top();
        int cabo2 = cabos.top();

        int novoCabo = cabo1 + cabo2;

        cabos.pop();

        cabos.push(novoCabo);
    }

    cout << custo << endl;
}