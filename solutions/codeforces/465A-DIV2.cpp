#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n,counter=0;
	string number;
	bool stop=false;
	cin>>n>>number;
	while(!stop and n > counter){
		if(number[counter]=='0'){
			counter++;
			stop=true;
		}else{
			counter++;
		}
	}
	cout<<counter<<"\n";
	return 0;
}