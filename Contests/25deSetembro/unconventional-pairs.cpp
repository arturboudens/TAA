#include <bits/stdc++.h>

using namespace std;

void diferenca(){
    int n = 0;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int difMax = 0;

    for(int i = 0; i < n; i += 2){
        int difAtual = a[i + 1] - a[i];

        if(difAtual > difMax) difMax = difAtual;
    }

    cout << difMax << endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 0;
    cin >> t;

    while(t--){
        diferenca();
    }

    return 0;
}