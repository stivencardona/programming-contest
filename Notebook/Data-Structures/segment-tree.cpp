/**
 * Taken from: https//codeforces.com/blog/entry/18051
 **/

typedef long long ll;

const int MN = 1e5; 

struct seg_tree {
  int n;  // array size
  ll t[2 * MN];

  seg_tree(int _n) : n(_n) {}

  void clear() {
    memset(t, 0, sizeof t);
  }

  void build() {  // build the tree
    for (int i = n - 1; i > 0; --i) t[i] = max(t[i<<1] , t[i<<1|1]);
  }

  // Single modification, range query.
  void modify(int p, int value) {  // set value at position p
    for (t[p += n] = value; p > 1; p >>= 1) t[p>>1] = max(t[p] , t[p^1]);
  }

  int query(int l, int r) {  // query on interval [l, r)
    ll res = 0;
    for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
      if (l&1) res = max( res , t[l++]);
      if (r&1) res = max( res , t[--r]);
    }
    return res;
  }
};
