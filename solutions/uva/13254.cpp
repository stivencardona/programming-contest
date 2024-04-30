#include <bits/stdc++.h>

#define pb push_back

using namespace std;

struct point {
    int x,y;
    point(int _x,int _y) : x(_x) , y(_y) {}
};

int orientation(point & p,point & r,point & q){
    int ans = (r.y - p.y) * (q.x - r.x) - (r.x - p.x) * (q.y - r.y);
    if (ans == 0) return 0;
    return (ans > 0) ? 1 : 2;   
}

void convexhull(vector<point> & A, vector<point> & hull){
    int l = 0;
    for(int i = 1; i < A.size() ; i++){
        if(A[i].x < A[l].x) 
            l = i;
    }
    int p = l, q;
    do {
        hull.pb(A[p]);
        q = (p+1)%A.size();
        for(int i = 0; i < A.size() ; i++){
            if(orientation(A[p],A[i],A[q]) == 2)
                q = i;
        }
        p = q;
    } while (p != l);
}

int main(){
    int n,r;
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    while( (cin >> n >> r ) and (n + r != 0 )){
        vector<point> A;
        vector<point> B;
        vector<point> polygon_A;
        vector<point> polygon_B;
        while( n-- ){
            int x , y;
            char label; 
            cin >> x >> y >> label;
            ( label == 'A') ? A.pb(point(x,y)) : B.pb(point(x,y)) ;
        }  
        convexhull(A , polygon_A); 
        convexhull(B , polygon_B);
        cout << "--------------------------------\n";
        for(point element : polygon_A)
            cout << element.x << " " << element.y << "\n";
        cout << "--------------------------------\n";
        for(point element : polygon_B)
            cout << element.x << " " << element.y << "\n";
    }
    return 0;
}