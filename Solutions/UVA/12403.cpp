#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n,ans=0;
	cin>>n;
	while(n--){
		string action;
		int mont;
		cin>>action;
		if(action=="donate"){
			cin>>mont;
			ans+=mont;
		}
		if(action=="report")
			cout<<ans<<"\n";
	}
	return 0;
}