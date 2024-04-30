#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define fori(i, a, b) for (int i = (a); i < (b); i++)
#define foreach(x, v) for (typeof (v).begin() x = (v).begin() ;x != (v).end() ;x++)  
#define D(x) cout<<(x)


int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t,n,value;cin>>t;
	string data;
	getline(cin,data);
	while(t--){
		vector<int> DAT(256,0);
		cin>>n;
		getline(cin,data);
		while(n--){
			char c;
			int cent;
			cin>>c>>cent;
			getline(cin,data);
			DAT[int(c)]=cent;
		}
		cin>>n;
		getline(cin,data);
		value=0;
		while(n--){
			getline(cin,data);
			for(char &c:data) value+=DAT[int(c)];
		}
	D(value/100);
	if(value%100 < 10)
		cout<<"."<<0<<value%100<<"$\n";
	else
		cout<<"."<<value%100<<"$\n";
	}
	return 0;
}