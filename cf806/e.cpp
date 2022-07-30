#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
using ll = long long;
using ull = unsigned long long;
using ldb = long double;
using P = pair<ll, ll>;
using G = vector<vector<ll>>;
#define fi first
#define se second
#define rep(i,a) for (ll i = 0, i##_range = (a); i < i##_range; i++)
#define REP(i,a,b) for (ll i = a, i##_range = (b); i < i##_range; i++)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define bs(a, b) binary_search(a.begin(), a.end(), b)
#define lb(a, b) lower_bound(a.begin(), a.end(), b)
#define ub(a, b) upper_bound(a.begin(), a.end(), b)
template <class T> bool chmin(T& a, const T& b) { return a > b ? a = b, true : false; }
template <class T> bool chmax(T& a, const T& b) { return a < b ? a = b, true : false; }
#ifdef _DEBUG
#include <debug.hpp>
#define debug(...) debug::dprint(#__VA_ARGS__, __VA_ARGS__)
#else
#define debug(...) (static_cast<void>(0))
#endif
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
   cin >> n;
   vector<string> s(n);
   rep(i,n) cin >> s[i];
 
   if(n == 1) {
      cout << 0 << '\n';
      return;
   }
 
   ll x = n/2, ans = 0;
   if(n%2 != 0) x++;
   rep(i,x) rep(j,n/2) {
      ll cnt = 0;
      if(s[i][j] == '1') cnt++;
      if(s[n-1-j][i] == '1') cnt++;
      if(s[n-1-i][n-1-j] == '1') cnt++;
      if(s[j][n-1-i] == '1') cnt++;
      ans += min(cnt, 4-cnt);
   } 
 
   cout << ans << '\n';
}
 
int main() {
   cin.tie(nullptr);
   ios::sync_with_stdio(false);
   cout << fixed << setprecision(20);
 
   ll t;
   cin >> t;
   while(t--) solve();
   return 0;
}