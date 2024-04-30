#include <bits/stdc++.h>

using namespace std;

#define Debugg(x) cout<<(x)<<" ";

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	double H,U,D,F;
	while(cin>>H>>U>>D>>F and H != 0){
		double climb=0,desc=(U*F)/100,incr=U;
		int i=0;
		while(true){
			i++;
			climb+=incr;
			incr = max(0.0, incr - desc);
			if(climb > H) break; 
			climb-=D;
			if(climb < 0) break;
		}
		cout << ( climb <= 0 ? "failure on day " : "success on day " ) << i <<"\n";
	}
 	return 0;
}