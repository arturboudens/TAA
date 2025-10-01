#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void check(){
    int a, b, y;

    cin >> a >> b;
    cin >> y;

    int c = 0;
    bool impossivel = false;

    for(int i = 0; i < 31; i++){
        int bitA = (a >> i) & 1;
        int bitB = (b >> i) & 1;
        int bitY = (y >> i) & 1;

        int bitA_B = bitA | bitB;

        if(bitA_B == 1 && bitY == 0){
            impossivel = true;
            break;
        }
        if(bitA_B == 0 && bitY == 1)
            c |= (1 << i);  //Liga o bit na posição i ao comparar com o c
        
    }
    if(impossivel){
            cout << -1 << endl;
        }
        else{
            cout << c << endl;
        }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;

    while(t--){
        check();
    }
    return 0;

}