#include <bits/stdc++.h>
using namespace std;
int main() {
	long long xAxes[1000];
	long long yAxes[1000];
	long long x,y,nq,points; // 
	cin>>x>>y>>nq>>points;
	for(int i=0;i<points;i++){
		cin>>xAxes[i]>>yAxes[i];
	}
	
	for(int i=0;i<points;i++){
		long long x1 = x-xAxes[i];
		long long y1 = y-yAxes[i];
		double result = sqrt(pow(x1,2) + pow(y1,2)); // 
		if(result > nq){
			cout<<"NO"<<endl;
		} else {
			cout<<"YES"<<endl;
		}
	}
}
