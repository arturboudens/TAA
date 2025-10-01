#include <bits/stdc++.h>

using namespace std;

int main(){
    int c;
    stack<pair<int, int>> mao;
    vector<int> mesa;

    cin >> c;

    while(c--){
        int n; cin >> n;

        mao.push({n, n});
    }

    while(!mao.empty()){
        if(mao.top().second - 1 != 0){
            pair<int, int> aux = mao.top();
            mao.pop();

            mao.push({aux.first, aux.second - 1});
            mao.push({aux.first, aux.second - 1});
        }
        else{
            mesa.push_back(mao.top().first);
            mao.pop();
        }
    }

    for(int valorInicial : mesa) cout << valorInicial << endl;


    return 0;
}