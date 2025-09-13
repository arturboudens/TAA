#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void sublime(){
    int x = 0, n = 0;

    cin >> x >> n;
    
    int soma = 0;

    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            soma += x;
        }
        else{
            soma -= x;
        }
    }

    cout << soma << endl;

}
int main(){
    int t = 0;

    cin >> t;

    while(t--){
        sublime();
    }
    return 0;
}