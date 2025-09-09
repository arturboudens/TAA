#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
    int n = 0, b = 0;

    cin >> n >> b;

    for(int i = 0; i < n; i++){
        int v = 0;

        cin >> v;

        v = v | (1 << b);

        cout << v << "\n";
    }
    return 0;
}
