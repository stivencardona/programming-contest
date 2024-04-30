#include <bits/stdc++.h>

using namespace std;

class point{
	private:
		double x;
		double y;
	public:
		point(double n,double t):x(n),y(t){}
		~point(){}
		double get_x(){return this->x;}
		double get_y(){return this->y;}
		double hyp(point& reference){
			double h=sqrt(abs(x-reference.get_x())*abs(x-reference.get_x())+abs(y-reference.get_y())*abs(y-reference.get_y()));
			return h;
		}
};


double state(point& c, point& a,point& b){
	double u=((c.get_x()-a.get_x())*(b.get_x()-a.get_x())+(c.get_y()-a.get_y())*(b.get_y()-a.get_y()))/((b.get_x()-a.get_x())*(b.get_x()-a.get_x())+(b.get_y()-a.get_y())*(b.get_y()-a.get_y()));
	return u;	
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	string n;
	cin>>n;
	char* pointer=&n[0];
	while(*pointer!='*'){
		int t=atoi(pointer);
		double Cx,Cy,radius=1000000000000000.0,tmp;
		cin>>Cx>>Cy;
		point center(Cx,Cy);
		double Ax,Ay,Px,Py,Bx,By,A,B,C,u;
		cin>>Ax>>Ay;
		Px=Ax;
		Py=Ay;
		t--;
		while(t--){
			cin>>Bx>>By;
			//cout<<"A( "<<Ax<<" , "<<Ay<<" ) B( "<<Bx<<" , "<<By<<" )\n";
			A=By-Ay;
			B=-(Bx-Ax);
			C=-(Ax*(By-Ay))+(Ay*(Bx-Ax));
			//cout<<"A = "<<A<<"\n";
			//cout<<"B = "<<B<<"\n";
			//cout<<"C = "<<C<<"\n";
			point one(Ax,Ay);
			point two(Bx,By);
			u=state(center,one,two);
			//cout<<"u = "<<u<<"\n";
			if(u<1 and u>0)
				tmp = abs(A*Cx+B*Cy+C)/sqrt(A*A+B*B);
			if(u>=1)
				tmp = center.hyp(two);
			if(u<=0)
				tmp = center.hyp(one);	
			if(tmp<radius)
				radius=tmp;
			//cout<<"TMP = "<<tmp<<"\n";
			Ax=Bx;
			Ay=By;
		}
		Bx=Px;
		By=Py;
		A=By-Ay;
		//cout<<"A( "<<Ax<<" , "<<Ay<<" ) B( "<<Bx<<" , "<<By<<" )\n";
		B=-(Bx-Ax);
		C=-(Ax*(By-Ay))+(Ay*(Bx-Ax));
		//cout<<"A = "<<A<<"\n";
		//cout<<"B = "<<B<<"\n";
		//cout<<"C = "<<C<<"\n";
		point one(Ax,Ay);
		point two(Bx,By);
		u=state(center,one,two);
		//cout<<"u = "<<u<<"\n";
		if(u<1 and u>0)
			tmp = abs(A*Cx+B*Cy+C)/sqrt(A*A+B*B);
		if(u>=1)
			tmp = center.hyp(two);
		if(u<=0)
			tmp = center.hyp(one);	
		if(tmp<radius)
			radius=tmp;
		//cout<<"TMP = "<<tmp<<"\n";
		Ax=Bx;
		Ay=By;
		cout<<fixed<<setprecision(3)<<radius<<"\n";
		cin>>n;
	}
	return 0;
}