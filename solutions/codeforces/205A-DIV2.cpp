#include <bits/stdc++.h>

using namespace std;

int main (){
	int n ; cin >> n;
	vector<int> data(n);
	int ans = 0, indx = 0;
	int min = 1000000010;
	for(int i = 0 ; i < n; i++){
		cin >> data[i];
		if(data[i] < min){
			min = data[i];
			indx = i + 1;	
		} 
	}
	for(int i = 0 ; i < n; i++) {
		if(data[i] == min)
			ans++;
	}
	if(ans > 1)
		cout << "Still Rozdil\n";
	else
		cout << indx << "\n";
	return 0;
}
