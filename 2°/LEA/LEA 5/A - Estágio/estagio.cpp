#include <bits/stdc++.h>

using namespace std;

int main(){
    set<char> ordenada;

    string arquivo;
    cin >> arquivo;

    for(char a : arquivo){
        ordenada.insert(a);
    }

    for(char b : ordenada){
        cout << b;
    }

    cout << endl;

    return 0;
}