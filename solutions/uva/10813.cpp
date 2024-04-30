#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n;
	cin>>n;
	while(n--){
		int balls=75,number,ans=1;
		bool stop=false;
		set<int> BR;
		set<int> IR;
		set<int> NR;
		set<int> GR;
		set<int> OR;
		set<int> BC;
		set<int> IC;
		set<int> NC;
		set<int> GC;
		set<int> OC;
		set<int> DL;
		set<int> DR;
		for(int i=0,t=0;i<5;i++){
			for(int j=0;j<5;j++,t++){
				if( i!=2 or j!=2){
					cin>>number;
					if(j==0)
						BR.insert(number);
					if(j==1)
						IR.insert(number);
					if(j==2)
						NR.insert(number);
					if(j==3)
						GR.insert(number);
					if(j==4)
						OR.insert(number);
					if(i==0)
						BC.insert(number);
					if(i==1)
						IC.insert(number);
					if(i==2)
						NC.insert(number);
					if(i==3)
						GC.insert(number);
					if(i==4)
						OC.insert(number);
					if(i==j)
						DR.insert(number);
					if(i+j==4)
						DL.insert(number);
				}
			}
		}
		while(balls--){
			cin>>number;
			if(BR.find(number)!=BR.end())
				BR.erase(number);
			if(IR.find(number)!=IR.end())
				IR.erase(number);
			if(NR.find(number)!=NR.end())
				NR.erase(number);
			if(GR.find(number)!=GR.end())
				GR.erase(number);
			if(OR.find(number)!=OR.end())
				OR.erase(number);
			if(BC.find(number)!=BC.end())
				BC.erase(number);
			if(IC.find(number)!=IC.end())
				IC.erase(number);
			if(NC.find(number)!=NC.end())
				NC.erase(number);
			if(GC.find(number)!=GC.end())
				GC.erase(number);
			if(OC.find(number)!=OC.end())
				OC.erase(number);
			if(DR.find(number)!=DR.end())
				DR.erase(number);
			if(DL.find(number)!=DL.end())
				DL.erase(number);
			if(BR.empty())
				stop=true;
			if(IR.empty())
				stop=true;
			if(NR.empty())
				stop=true;
			if(GR.empty())
				stop=true;
			if(OR.empty())
				stop=true;
			if(BC.empty())
				stop=true;
			if(IC.empty())
				stop=true;
			if(NC.empty())
				stop=true;
			if(GC.empty())
				stop=true;
			if(OC.empty())
				stop=true;
			if(DR.empty())
				stop=true;
			if(DL.empty())
				stop=true;
			if(!stop)
				ans++;
		}
		cout<<"BINGO after "<<ans<<" numbers announced"<<"\n";
	}
	return 0;
}