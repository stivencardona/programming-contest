template <typename int>
struct FenwickTree {
  int n;
  vector<int> tree;

  FenwickTree(int n) : n(n), tree(n + 1) {}

  void update(int i, int val) {
    while (i <= n) {
      tree[i] += val;
      i += (i & -i);
    }
  }

  int query(int i) {
    int sum = 0;
    while (i > 0) {
      sum += tree[i];
      i -= (i & -i);
    }
    return sum;
  }
};
