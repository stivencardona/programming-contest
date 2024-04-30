#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define fori(i, a, b) for (int i = (a); i < (b); i++)
#define foreach(x, v) for (typeof (v).begin() x = (v).begin() ;x != (v).end() ;x++)  
#define D(x) cout<<(x)<<"\n"

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n;
	while(cin>>n){	
		bool state=true;
		std::vector<int> v(n);
		std::vector<bool> memo(n);
		for(auto &i:v)cin>>i;
		fori(i,1,n) abs(v[i]-v[i-1]) > 0 and abs(v[i]-v[i-1]) < n ? memo[abs(v[i]-v[i-1])]=true : state=false;
		fori(i,1,n)if(!memo[i])state=false;
		if(state)
			D("Jolly");
		else
			D("Not jolly");
	}
	return 0;
}