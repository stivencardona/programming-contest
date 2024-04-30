#include <bits/stdc++.h>

using namespace std;

#define D(x) cout<<(x)<<" ";

string s;
char letters[35]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','1','2','3','4','5','6','7','8','9'};
char rever[35]={'A','0','0','0','3','0','0','H','I','L','0','J','M','0','O','0','0','0','2','T','U','V','W','X','Y','5','1','S','E','0','Z','0','0','8','0'};

bool palindrome(){
	for(int i=0,j=s.size()-1;i < (s.size()/2) ;i++,j--){
		if(s[i] != s[j]) return false;
	}	
	return true;
}

bool mirrored(){
	string mirror="";
	for(int i=s.size()-1;i>=0;i--){
		int idx = (s[i] >= 'A') ? s[i] - 'A' : 26 + (s[i] - '1');
		if(rever[idx] != '0') mirror += rever[idx];
		else return false;
	}
	return (mirror == s) ? true : false;
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	while(cin>>s){
		bool mirror=mirrored();	
		bool palin=palindrome();
		cout << s << " -- is ";
		cout << ((mirror and palin) ? "a mirrored palindrome." : (mirror) ? "a mirrored string." : (palin) ? "a regular palindrome." : "not a palindrome.") << "\n\n";   
	}
 	return 0;
}