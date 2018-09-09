#include <bits/stdc++.h>

using namespace std;

#define D(x) cout<<(x)<<" ";

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n;cin>>n;
	while(n--){
		int sum,dif;cin>>sum>>dif;
		int b=(sum-dif)/2;
		int a= dif + b;
		( (a >= 0 and b >= 0) and (a + b == sum and a - b == dif)) ? cout<< a << " " << b << "\n" : cout << "impossible\n"; 
	}
 	return 0;
}