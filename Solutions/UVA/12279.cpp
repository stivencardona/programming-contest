#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n,index=1;
	cin>>n;
	while(n != 0){
		int quantity=n,zeros=0;
		while(n--){
			int tmp;
			cin>>tmp;
			if(tmp == 0)
				zeros++;
		}
		cout<<"Case "<<index<<": "<<(quantity-zeros)-zeros<<"\n";
		index++;
		cin>>n;
	}
	return 0;
}