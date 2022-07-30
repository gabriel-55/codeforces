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
 
int main() {
   cin.tie(nullptr); ios::sync_with_stdio(false); cout << fixed << setprecision(20);
   ll t;
   cin >> t;
 
   while(t--) {
      ll n, q;
      cin >> n >> q;
 
      map<ll, P>  mp;
      rep(i,n) {
         ll a;
         cin >> a;
         if(mp[a].fi == 0) mp[a].fi = i+1;
         if(mp[a].se < i+1) mp[a].se = i+1;
      }
 
      rep(i,q) {
         ll a, b;
         cin >> a >> b;
         if(mp[a].fi < mp[b].se && mp[a].fi != 0 && mp[b].fi != 0) cout << "YES" << '\n';
         else cout << "NO" << '\n';
      }
   }
}