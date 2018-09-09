#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n;
	cin>>n;
	while(n != 0){
		int a,b;
		cin>>a>>b;
		while(n--){
			int x,y;
			cin>>x>>y;
			if(a>x && b>y)
				cout<<"SO"<<"\n";
			if(a<x && b>y)
				cout<<"SE"<<"\n";
			if(a>x && b<y)
				cout<<"NO"<<"\n";
			if(a<x && b<y)
				cout<<"NE"<<"\n";
			if(a==x || b==y)
				cout<<"divisa"<<"\n";
		}
		cin>>n;
	}
	return 0;
}