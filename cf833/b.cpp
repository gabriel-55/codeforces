#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
using ll = long long;
using ull = unsigned long long;
using ldb = long double;
using P = pair<ll, ll>;
#define fi first
#define se second
#define REP(i,a,b) for (ll i = a, i##_range = (b); i < i##_range; i++)
#define rep(i,a) REP(i,0,a)
template <class T> bool chmin(T& a, const T& b) { return a > b ? a = b, true : false; }
template <class T> bool chmax(T& a, const T& b) { return a < b ? a = b, true : false; }
#ifdef _DEBUG
#include <debug.hpp>
#define debug(...) debug::dprint(#__VA_ARGS__, __VA_ARGS__)
#else
#define debug(...) (static_cast<void>(0))
#endif
struct initialise { initialise() { cin.tie(nullptr); ios::sync_with_stdio(false); cout << fixed << setprecision(20); }; }__INI__;
const ll inf = 1LL << 60;
const ll dx[4] = {-1, 1, 0, 0}, dy[4] = {0, 0, -1, 1};
 
/*---------------------------------------------------------------------------------------------------
　　 　　 ○＿＿＿＿＿_
　  　 　 ||　 　 　 |
　 　  　 ||　  ● 　 |
　 　  　 ||　 　 　 |
 　   　  ||￣￣￣￣￣
　　   　 ||  君が代は
   ∧__,,∧||　 千代に八千代に
　 ( ｀･ω･||    さざれ石の巌となりて
　  ヽ  つ０     こけのむすまで
　　 し―-J
---------------------------------------------------------------------------------------------------*/
 
void solve() {
   ll n;
   string s;
   cin >> n;
   cin >> s;
   
   ll ans = 0;
   rep(i,n) {
      ll var = 0, mx = 0;
      vector<ll> v(10, 0);
      REP(j,i,min(i+100, n)) {
         ll x = s[j]-'0';
         if(!v[x]) var++;
         v[x]++;
         chmax(mx, v[x]);
         if(mx <= var) ans++;
      }
   }
   cout << ans << '\n';
}
 
int main() {
   ll t = 1;
   cin >> t;
   while(t--) solve();
   return 0;
}