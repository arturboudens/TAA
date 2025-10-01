#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n = 0;
    string input;

    stack<string> sites;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> input;

        if(input != "<"){
            sites.push(input);
        }
        else{
            if(!sites.empty()){
                sites.pop();
            }
        }

        if(sites.empty()){
            cout << "pagina em branco" << endl;
        }
        else{
            cout << sites.top() << endl;
        }
    }
    return 0;
}