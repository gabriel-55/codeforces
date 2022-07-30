#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define rep(i,n) for (int i = 0; i < int(n); i++)
 
int func(int x){
    string s = to_string(x);
    if((s[0]-'0')%2 == 0) return 1;
    int n = 0;
    rep(i,s.size()){
        if((s[i]-'0')%2 == 0) return 2;
    }
    return -1;
}
 
int main() {
    int t;
    cin >> t;
    rep(i,t){
        int n;
        cin >> n;
        if(n%2 == 0){
            cout << 0 << "\n";
            continue;
        }
        cout << func(n) << "\n";
    }
    return 0;
}