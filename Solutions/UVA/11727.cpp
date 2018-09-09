#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		vector<int> t;
		int tmp;
		cin>>tmp;
		t.push_back(tmp);
		cin>>tmp;
		t.push_back(tmp);
		cin>>tmp;
		t.push_back(tmp);
		sort(t.begin(),t.end());
		cout<<"Case "<<i<<": "<<t[1]<<"\n";
	}
	return 0;
}