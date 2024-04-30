#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	string n;
	bool state = true;
	while(getline(cin,n)){
		for(auto x: n){
			if(x=='"' and state){
				cout<<"``";
				state=false;
			}else if(x=='"'){
				cout<<"''";
				state=true;
			}else{
				cout<<x;
			}
		}
		cout<<"\n";
	}
	return 0;
}