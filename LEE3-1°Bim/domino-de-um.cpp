#include <bits/stdc++.h>

using namespace std;

int main()
{

    deque<pair<int, int>> pecasDisponiveis;
    vector<pair<int, int>> mesa;

    int p = 0;

    cin >> p;

    for(int i = 0; i < p; i++){
        int lado1 = 0, lado2 = 0;

        cin >> lado1 >> lado2;

        pecasDisponiveis.push_back({lado1, lado2});
    }

    while(!pecasDisponiveis.empty()){
        mesa.push_back(pecasDisponiveis.front());

        pecasDisponiveis.pop_front();

        if(!pecasDisponiveis.empty()){
            if(pecasDisponiveis.front().first + pecasDisponiveis.front().second == 7){
                pecasDisponiveis.push_back(pecasDisponiveis.front());
                pecasDisponiveis.pop_front();
            }
            else{
                pecasDisponiveis.pop_front();
            }
        }
    }

    for(int i = 0; i < mesa.size(); i++){
        cout << mesa[i].first << " " << mesa[i].second << endl;
    }

    return 0;
}