#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n;
	cin>>n;
	while(n--){
		int twos=0,ones=0;
		string tmp;
		cin>>tmp;
		if(tmp.size()>3)
			cout<<3<<"\n";
		else{
			if(tmp[0]=='o')
				ones++;
			if(tmp[1]=='n')
				ones++;
			if(tmp[2]=='e')
				ones++;
			if(tmp[0]=='t')
				twos++;
			if(tmp[1]=='w')
				twos++;
			if(tmp[2]=='o')
				twos++;
			if(ones>twos)
				cout<<1<<"\n";
			else
				cout<<2<<"\n";
		}
	}
	return 0;
}