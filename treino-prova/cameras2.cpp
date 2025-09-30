#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 0;
    cin >> n;

    unsigned long long camera = 0;

    unsigned long long alunos = 0;

    for(int i = 0; i < n; i++){
        cin >> alunos;
         
        camera |= (1ULL << alunos);
        
    }

    cout << camera << endl;
}