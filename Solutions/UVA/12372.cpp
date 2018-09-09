#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n,index=1;
	cin>>n;
	while(n--){
		int L,W,H;
		cin>>L>>W>>H;
		if(L <= 20 && W <= 20 && H <= 20)
			cout<<"Case "<<index<<": good\n";
		else
			cout<<"Case "<<index<<": bad\n";
		index++;
	}
	return 0;
}