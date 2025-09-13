#include <iostream>

using namespace std;

void lasers(){
    int n = 0, m = 0, x = 0, y = 0;

    cin >> n >> m >> x >> y;

    int a[n], b[m];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int j = 0; j < m; j++){
        cin >> b[j];
    }

    int total = n + m;

    cout << total << endl;

}

int main(){
    int t = 0;

    cin >> t;

    while(t--){
        lasers();
    }

    return 0;
}