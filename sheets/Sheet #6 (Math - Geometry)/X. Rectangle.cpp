#include <bits/stdc++.h>
using namespace std;
int main() {
	long long x1,y1,x2,y2,x3,y3,x4,y4;
	cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
	long long mi_x = min(min(x1,x2) , min(x3,x4));
	long long ma_x = max(max(x1,x2) , max(x3,x4));
	long long mi_y = min(min(y1,y2) , min(y3,y4)); 
	long long ma_y = max(max(y1,y2) , max(y3,y4));
	long long points;
	cin>>points;
	for(int i=0;i<points;i++){
		long long x,y;
		cin>>x>>y;
		if(x >= mi_x && x <= ma_x && y >= mi_y && y <= ma_y){
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
	}
	
}
