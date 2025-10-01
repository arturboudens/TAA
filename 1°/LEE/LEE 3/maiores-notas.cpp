#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a = 0, q = 0;

    cin >> a >> q;

    vector<int> v(a);

    for(int i = 0; i < a; i++){
        cin >> v[i];
    }
    for(int j = 0; j < q; j++){
        int c = 0;
        cin >> c;

        auto busca = upper_bound(v.begin(), v.end(), c); //acha o primeiro termo maior que 'c' e coloca em 'busca'
        int contador = distance(busca, v.end()); //conta quantos numeros estao entre 'busca' e o final

        cout << contador << " notas maiores que " << c << endl;
    }

    return 0;
}