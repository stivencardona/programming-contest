#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	string n;
	int t;
	cin>>t;
	while(t--){
		long long  a,b;
		cin>>a>>b;
		if(a<b)
			cout<<"<"<<"\n";
		else if(a>b)
			cout<<">"<<"\n";
		else
			cout<<"="<<"\n";	
	}
	return 0;
}