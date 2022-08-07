#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/dsu>
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
   ll mx = -1, id = -1;
   ll n;
   cin >> n;
   vector<ll> a(n);
   rep(i,n) {
      cin >> a[i];
      chmax(mx, a[i]);
      if(mx == a[i]) id = i;
   }
   bool ok = true;
   for(ll i = max(0LL, id-1); i > 0; i--) {
      if(a[i-1] > a[i]) ok = false;
   }
   for(ll i = min(id+1, n-1); i < n-1; i++) {
      if(a[i+1] > a[i]) ok = false;
   }
   if(ok) puts("YES");
   else puts("NO");
}
 
int main() {
   ll t = 1;
   cin >> t;
   while(t--) solve();
   return 0;
}