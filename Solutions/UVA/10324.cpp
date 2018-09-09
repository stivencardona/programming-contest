#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	string n;
	int t,index=1;
	while(cin>>n){	
		cin>>t;
		cout<<"Case "<<index<<":\n";
		while(t--){
			int a,b,min,max;
			cin>>a>>b;
			if(a>b){
				max=a;
				min=b;
			}else{
				max=b;
				min=a;
			}
			int r=0;
			for(int i=min;i<=max;i++){
				r+=int(n[i])-48;
			}
			if(r == 0 || r == (max-min)+1)
				cout<<"Yes\n";
			else
				cout<<"No\n";
		}
		index++;
	}
	return 0;
}