#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	string n;
	int index=1;
	cin>>n;
	while(n != "*"){
		string ans;
		if(n == "Hajj")
			ans="Hajj-e-Akbar";
		else if(n == "Umrah")
			ans="Hajj-e-Asghar";
		cout<<"Case "<<index<<": "<<ans<<"\n";
		index++;
		cin>>n;
	}
	return 0;
}