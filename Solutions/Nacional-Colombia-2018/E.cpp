#include <bits/stdc++.h>

using namespace std;

int cnt = 0;

void merge_sort(vector<int> &v, int l, int r) {
	if (l + 1 == r) return;
	int m = (l + r) / 2;
	merge_sort(v, l, m);
	merge_sort(v, m, r);
	vector<int> tmp(r - l);
	for (int i = l, j = m, k = 0; i < m or j < r; k++) {
		if (j == r || (i < m && v[i] <= v[j])) {
			tmp[k] = v[i];
			i++;
		} else {
			tmp[k] = v[j];
			j++;
            cnt += m - i;
		}
	}
	for (int i = 0; i < (int)tmp.size(); i++)
		v[l + i] = tmp[i];
}

int main(){
    int n,m;
    while(cin >> n >> m){
        int d = 0;
        vector<int> a;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                int tmp; cin >> tmp;
                a.push_back(tmp);
                if(tmp == n * m) d = abs(i - (n - 1)) +  abs(j - (m - 1)); 
            }
        }
        cnt = 0;
        merge_sort(a , 0 , a.size());
        cout << (((d + cnt) % 2) ? "N" : "Y") << "\n";
    }
    return 0;
}