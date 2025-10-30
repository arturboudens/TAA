#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t = 0; cin >> t;

    while(t--){
        string r;
        string s;

        cin >> r;
        cin >> s;

        sort(r.begin(), r.end());
        sort(s.begin(), s.end());

        if(r != s){
            cout << "DIFERENTES" << endl;
        }
        else{
            cout << "ANAGRAMAS" << endl;
        }
    }

    return 0;
}