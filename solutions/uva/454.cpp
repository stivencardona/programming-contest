#include <bits/stdc++.h>

using namespace std;
typedef pair<string,string> ss;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n;
	string no;
	cin>>n;
	getline(cin,no);
	getline(cin,no);
	while(n--){
		std::vector<ss> vss;
		string tmp;
		tmp="ignore";
		while(tmp.size()){
			string storage;
			getline(cin,tmp);
			for(auto  x : tmp){
				if(x != ' '){
					storage+=x;
				}
			}
			sort(storage.begin(),storage.end());
			ss aux(tmp,storage);
			vss.push_back(aux);	
		}
		sort(vss.begin(),vss.end());
		for(int i = 0 ; i < vss.size()-1 ; i++){
			for(int j = i + 1 ; j < vss.size(); j++){
				if (vss[i].second == vss[j].second){
					cout<<vss[i].first<<" = "<<vss[j].first<<"\n";
				}
			}		
		}
		if(n!=0)
			cout<<"\n";
	}
	return 0;
}