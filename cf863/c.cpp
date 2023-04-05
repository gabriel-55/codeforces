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
#define m_99(i,a,b) for (ll i = a, i##_range = (b); i < i##_range; i++)
#define rep(i,a) m_99(i,0,a)
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
   vector<ll> a(n, 0), b(n-1);
   rep(i,n-1) cin >> b[i];
   a[0] = b[0];
   a[n-1] = b[n-2];
   vector<ll> seen(n-1, 0);
   seen[0] = seen[n-2] = 1;
   rep(i,n-2) if(b[i] == b[i+1]) {
      a[i+1] = b[i];
      seen[i+1] = seen[i] = 1;
   }
   rep(i,n-1) {
      if(seen[i]) continue;
      if(max(b[i], b[i-1]) == b[i-1]) {
         a[i] = b[i];
         seen[i] = 1;
      }
      else if(max(b[i], b[i+1]) == b[i+1]) {
         a[i+1] = b[i];
         seen[i] = 1;
      }
   }

   rep(i,n) cout << a[i] << " \n"[i == n-1];
   debug(seen);
}
 
int main() {
   ll t = 1;
   cin >> t;
   while(t--) solve();
   return 0;
}