#include <bits/stdc++.h>

using namespace std;

typedef pair<string,int> dato;

struct entry{
	string name;
	int puntaje=0;
	vector<int> points;
	bool operator < (const entry &other) const {
    	if(other.puntaje != puntaje){
    	  	return other.puntaje > puntaje;
   		}
    	else{
      		for(int i=0;i<50;i++){
      			if(other.points[i]!=points[i])
      				return other.points[i] > points[i];
      		}	
    	}
    }
};
struct entrys{
	string name;
	int puntaje=0;
	vector<int> points;
	bool operator < (const entrys &other) const {
    	if(other.points[0] != points[0]){
    	  	return other.points[0] > points[0];
   		}
    	else{
    		if(other.puntaje != puntaje){
    	  		return other.puntaje > puntaje;
   			}else{
      			for(int i=1;i<50;i++){
      				if(other.points[i]!=points[i])
      					return other.points[i] > points[i];
      			}			
   			}
    	}
    }
};

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	map<string,int> id;
	int puntos[10]={25,18,15,12,10,8,6,4,2,1};
	vector<entry> memory;
	vector<entrys> memorys;
	int n,m,i=0;
	string tmp;
	cin>>n;
	while(n--){
		cin>>m;
		for(int j=0;j < m; j++){
			cin>>tmp;
			map<string,int>::iterator one=id.find(tmp);
			if(one!=id.end()){
				int idex=one->second;
				memory[idex].points[j]+=1;
				memorys[idex].points[j]+=1;
				if(j<10){
					memory[idex].puntaje+=puntos[j];
					memorys[idex].puntaje+=puntos[j];
				}
			}else{
				entrys setups;
				setups.name=tmp;
				setups.points.assign(50,0);
				setups.points[j]=1;
				setups.puntaje=0;
				entry setup;
				setup.name=tmp;
				setup.points.assign(50,0);
				setup.points[j]=1;
				setup.puntaje=0;
				if(j<10){
					setup.puntaje=puntos[j];
					setups.puntaje=puntos[j];
				}
				memory.push_back(setup);
				memorys.push_back(setups);
				id.insert(dato(tmp,i));
				i++;
			}
		}
	}
	priority_queue<entry> list;
	priority_queue<entrys> lists;
	for(entry x : memory){
		list.push(x);
	}
	for(entrys x : memorys){
		lists.push(x);
	}
	cout<<list.top().name<<"\n";
	cout<<lists.top().name<<"\n";
	return 0;
}