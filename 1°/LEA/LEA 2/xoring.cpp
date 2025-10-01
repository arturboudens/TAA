#include <iostream>
#include <string>
#include <vector>
#include <cctype> 

using namespace std;

void resolver() {
    string r, s;
    
    cin >> r >> s;

    string t = "";
    t.resize(r.length());

    for (size_t i = 0; i < r.length(); ++i) {
        
        bool r_eh_minusculo = islower(r[i]);
        bool s_eh_minusculo = islower(s[i]);

        if (r_eh_minusculo ^ s_eh_minusculo) {
            t[i] = tolower(r[i]);
        } else {
            
            t[i] = toupper(r[i]);
        }
    }

    cout << t << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num_casos_teste;
    cin >> num_casos_teste;

    while (num_casos_teste--) {
        resolver();
    }

    return 0;
}