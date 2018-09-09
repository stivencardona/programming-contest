#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		std::vector<int> v;	
		while(n--){
			int tmp;
			cin>>tmp;
			v.push_back(tmp);
		}
		sort(v.begin(),v.end());
		cout<<(v[v.size()-1]-v[0])*2<<"\n";
	}
	return 0;
}