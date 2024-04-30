#include <bits/stdc++.h>

const int MN = 1e5 + 7;
const int oo = 1e9 + 7;

typedef long long ll;

using namespace std;

struct seg_tree {
  int n;  // array size
  ll t[2 * MN];

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

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n,q; 
	while(cin >> n && n != 0){
		cin >> q;
		vector<int> memo(2e5 + 10);
		vector<int> A(n, -100010);
		seg_tree st;
		st.n = n;
		for(int i = 0; i < n; i++){
			int val; cin >> val;
			int idx = 1e5 + val; 
			A[i] = val;
			memo[idx]++;
			st.t[n + i] = memo[idx];
		}
		st.build();
		while(q--){
			int l,r; cin >> l >> r;
			if(A[l - 1] == A[r - 1])
				cout << r - l + 1 << "\n";	
			else if(l == 1)
				cout << st.query(l - 1,r) << "\n";
			else if(A[l - 1] != A[l - 2])
				cout << st.query(l - 1,r) << "\n";
			else if(A[l - 1] == A[l - 2]){
				int idx = upper_bound(A.begin(), A.end(), A[l - 1]) - A.begin();
				cout << max(idx - l + 1, st.query(idx,r)) << "\n";
			}
		}
	}
	return 0;
}
