#include <atcoder/dsu>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, q;
  cin >> n >> q;
  dsu uf(n);
  rep(i, q) {
    int t;
    cin >> t;
    int u, v;
    cin >> u >> v;
    if (t == 0) {
      uf.merge(u, v);
    }
    if (t == 1) {
      cout << uf.same(u, v) << endl;
    }
  }
  return 0;
}
