#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	string n;
	int index = 1; 
	cin>>n;
	while(n != "#"){
		string value="UNKNOWN";
		if(n == "HELLO")
			value = "ENGLISH";
		if(n == "HOLA")
			value = "SPANISH";
		if(n == "HALLO")
			value = "GERMAN";
		if(n == "BONJOUR")
			value = "FRENCH";
		if(n == "CIAO")
			value = "ITALIAN";
		if(n == "ZDRAVSTVUJTE")
			value = "RUSSIAN";
		cout<<"Case "<<index<<": "<<value<<"\n";
		index++;
		cin>>n;
	}
	return 0;
}