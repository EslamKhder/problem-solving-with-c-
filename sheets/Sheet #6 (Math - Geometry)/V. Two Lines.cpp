#include <bits/stdc++.h>
using namespace std;
int main() {
	long long x1,y1,x2,y2,x3,y3,x4,y4;
	cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
	long long xx1 = x2 - x1;
	long long yy1 = y2 - y1;
	
	long long xx2 = x4 - x3;
	long long yy2 = y4 - y3;
	
	if(xx1 * yy2 == xx2 * yy1){
		cout<<"YES";
	} else {
		cout<<"NO";
	}
}
