#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void bitswap(){
    int p = 0, q = 0;
    unsigned long long n = 0;
    
    cin >> n >> p >> q;

    unsigned long long bit_p = (n >> p) & 1ULL;
    unsigned long long bit_q = (n >> q) & 1ULL;

    if(bit_p != bit_q){
        unsigned long long aux = (1ULL << p) | (1ULL << q);
        n ^= aux;
    }

    cout << n << endl;


}
int main(){
    int t = 0;

    cin >> t;

    while(t--){
        bitswap();
    }
    return 0;
}