long long inverNum = 0;

void merge(vector<int> &v, int l, int r) {
	if (l + 1 == r) return;
	int m = (l + r) / 2;
	merge(v, l, m);
	merge(v, m, r);
	vector<int> tmp(r - l);
	for (int i = l, j = m, k = 0; i < m or j < r; k++) {
		if (j == r || (i < m && v[i] <= v[j])) {
			tmp[k] = v[i];
			i++;
		} else {
			tmp[k] = v[j];
			j++;
            inverNum += m - i;
		}
	}
	for (int i = 0; i < (int)tmp.size(); i++)
		v[l + i] = tmp[i];
}