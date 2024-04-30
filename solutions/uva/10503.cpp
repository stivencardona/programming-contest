#include <bits/stdc++.h>

using namespace std;

#define pb push_back

typedef pair<int,int> ii;
vector<ii> data;
vector<int> state;

int n,m;
ii start;
ii fin;
bool arrive=false;

void back_track(ii u, int d){
	if(d > n){
		return;
	}
	if(u.second == fin.first and d == n){
		arrive=true;
		return;
	}
	for(int i=0;i<data.size();i++){
		if(data[i].first == u.second and state[i]==0){
			state[i]=1;
			(i%2==0) ? state[i+1]=1 : state[i-1]=1;
			back_track(data[i], d+1);
			state[i]=0;
			(i%2==0) ? state[i+1]=0 : state[i-1]=0;
		}
	}
}

int main(){
	while(cin>>n && n!=0){
		cin>>m;
		int x,y;cin>>x>>y;
		start.first=x;
		start.second=y;
		cin>>x>>y;
		fin.first=x;
		fin.second=y;
		while(m--){
			int _x,_y;cin>>_x>>_y;
			state.pb(0);
			state.pb(0);
			data.pb(ii(_x,_y));
			data.pb(ii(_y,_x));
		}
		back_track(start,0);
		cout << ((arrive) ? "YES\n" : "NO\n" ); 
		data.clear();
		state.clear();
		arrive=false;
	}
	return 0;
}