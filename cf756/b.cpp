#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;
using Lf = long double;
#define rep(i,n) for (ll i = 0; i < ll(n); i++)
 
int main() {
    ll t;
    cin >> t;
    rep(i,t){
        ll a, b;
        cin >> a >> b;
        cout << min({a, b, (a+b)/4}) << endl;
    }
    return 0;
}