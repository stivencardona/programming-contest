#include <bits/stdc++.h>

using namespace std;

int main (){
	int b, k; cin >> b >> k;
	vector<int> data(k);
	int n_odd = 0;
	for(int i = 0; i < k ; i++)
		cin >> data[i];
	if(b % 2){
		for(int i = 0; i < k ; i++)
			if(data[i]%2) n_odd++;
	}
	if(b%2 == 0){
 		if(data[k-1]%2) 
			cout << "odd\n"; 
		else 
			cout << "even\n";	
	}else{
		if(n_odd%2==0)
			cout << "even\n";
		else
			cout << "odd\n";
		
	}
	return 0;
}
