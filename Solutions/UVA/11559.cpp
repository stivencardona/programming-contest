#include <bits/stdc++.h>

using namespace std;

int MIN=~(1<<31);

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int parti,budget,hotels,weeks;
	while(cin>>parti>>budget>>hotels>>weeks){
		while(hotels--){
			int _weeks=weeks;
			int cost;cin>>cost;
			while(_weeks--){
				int bed;cin>>bed;
				if(bed>=parti)
					MIN=min(MIN,cost*parti);
			}
		}
		MIN <= budget ? cout<<MIN<<"\n" : cout<<"stay home\n"; 
		MIN=~(1<<31);
	}
 	return 0;
}