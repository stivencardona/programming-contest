#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n,index=1;
	string no;
	cin>>n;
	getline(cin,no);
	while(n--){
		int size = 0;
		bool stop = false;
		string cad,storage;
		getline(cin,cad);
		for(auto x : cad){
			if(x <= 'z' and x >= 'a')
				storage+=x;
		}
		for(int i=0, j=storage.size()-1 ; !stop and i < storage.size()-1; i++,j--){
			if(storage[i]==storage[j])
				size++;
			else
				stop=true;
		}
		cout<<"Case #"<<index<<":\n";
		if(++size==storage.size() or !storage.size()){
			int u=sqrt(storage.size());
			if(sqrt(storage.size())*10==u*10)
				cout<<u<<"\n";
			else
				cout<<"No magic :("<<"\n";
		}
		else
			cout<<"No magic :("<<"\n";
		index++;
	}
	return 0;
}