#include <bits/stdc++.h>

using namespace std;

void distancia(){
    long long x = 0, y = 0;
    long long xorXY = 0;

    cin >> x >> y;

    xorXY = x ^ y;

    long long distancia = __builtin_popcountll(xorXY);

    cout << distancia << endl;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 0;

    cin >> t;
    
    while(t--){
        distancia();
    }

    return 0;
}