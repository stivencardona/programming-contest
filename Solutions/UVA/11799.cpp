#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t,index=1;
	cin>>t;
	while(t--){
		int students;
		cin>>students;
		cout<<"Case "<<index<<": ";
		int tmp;
		std::vector<int> storage;
		while(students--){	
			cin>>tmp;
			storage.push_back(tmp);
		}
		sort(storage.begin(),storage.end());
		cout<<storage[storage.size()-1]<<"\n";
		index++;
	}
	return 0;
}