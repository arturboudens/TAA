#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long double a = 0, b = 0, c = 0;
    const double EPS = 1e-5;

    cin >> a >> b >> c;

    long double low = 0.0, high = 200000.0;

    while(fabs(high - low) > EPS){
        long double mid = low + (high - low) / 2;

        long double chute = a * mid + b * cos(mid);

        if(chute == c){
            break;
        }
        else if(chute < c){
            low = mid;
        }
        else{
            high = mid;
        }
    }

    cout << fixed << setprecision(4) << low << endl;

    return 0;
}