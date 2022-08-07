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
   cin >> n;
   ll mxx = -inf, mxy = -inf, mnx = inf, mny = inf;
   rep(i,n) {
      ll x, y;
      cin >> x >> y;
      if(x == 0) {
         if(y > 0) chmax(mxy, y);
         else chmin(mny, y);
      }
      else if(y == 0) {
         if(x > 0) chmax(mxx, x);
         else chmin(mnx, x);
      }
   }

   vector<ll> v;
   if(mxx != -inf) v.emplace_back(mxx);
   if(mnx != inf) v.emplace_back(mnx);
   if(mxy != -inf) v.emplace_back(mxy);
   if(mny != inf) v.emplace_back(mny);

   ll ans = 0;
   rep(i,v.size()) {
      ans += abs(v[i])*2;
   }
   cout << ans << '\n';
}
 
int main() {
   ll t = 1;
   cin >> t;
   while(t--) solve();
   return 0;
}