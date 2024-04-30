#include <bits/stdc++.h>

using namespace std;

#define D(x) cout<<(x)<<" ";

int vi[8]={1,0,1,1,-1,0,-1,-1};
int vj[8]={0,1,1,-1,0,-1,-1,1};
char grid[110][110];
int n,m;

int mines(int i, int j){
	int ans=0;
	for(int idx=0;idx<8;idx++){
		int ni = i+vi[idx],nj = j + vj[idx];  
		if(ni < n and ni >= 0 and nj < m and nj >= 0)
			if(grid[ni][nj] == '*') ans++;
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int idx=1;
	while(cin>>n>>m and n + m){
		if(idx>1) cout<<"\n";
		cout<<"Field #"<<idx<<":\n";
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				cin>>grid[i][j];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				(grid[i][j] != '*') ? cout << mines(i,j) : cout << "*"; 
			}
			cout << "\n";
		}
		idx++;
	}
 	return 0;
}