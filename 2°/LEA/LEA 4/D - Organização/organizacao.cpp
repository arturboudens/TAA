#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int p = 0, s = 0;
    cin >> p >> s;

    map<string, tuple<string, string, string>> info;

    for (int i = 0; i < p; i++) {
        string nome, d1, d2, d3;
        cin >> nome >> d1 >> d2 >> d3;
        
        tuple<string, string, string> info_atual = make_tuple(d1, d2, d3);
        info[nome] = info_atual;
    }

    for (int i = 0; i < s; i++) {
        string nome, item;
        cin >> nome >> item;

        if (info.find(nome) == info.end()) {
            cout << nome << " queria ganhar qualquer coisa e ganhou " << item << "!" << endl;
        } else {
            tuple<string, string, string> escolhas = info[nome];

            string d1 = get<0>(escolhas);
            string d2 = get<1>(escolhas);
            string d3 = get<2>(escolhas);

            if (item == d1 || item == d2 || item == d3) {
                cout << nome << " conseguiu ganhar " << item << "!" << endl;
            } else {
                cout << nome << " infelizmente ganhou " << item << "..." <<  endl;
            }
        }
    }

    return 0;
}