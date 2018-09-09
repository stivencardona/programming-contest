#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n;
	cin>>n;
	while(n--){
		long long  ans;
		cin>>ans;
		ans=(((((ans*567)/9)+7492)*235)/47)-498;
		ans%=100;
		ans-= ans%10;
		ans/=10;
		cout<<abs(ans)<<"\n";
	}
	return 0;
}