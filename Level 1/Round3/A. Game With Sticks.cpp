#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

	int n,m;
	cin>>n>>m;
	int times = 0;
	if(n == m){
		times = (n + m) / 2;
	} else if( n < m){
		times = n;
	} else {
		times = m;
	}
	
	if(times % 2 == 0){ // 4 / 2 = 2.0   4 % 2 = 0
		cout<<"Malvika"<<endl;
	} else {
			cout<<"Akshat"<<endl;
	}
}
