#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int x; // 5            5 / 2      2 * 2
	cin>>x;
	int res = 0;
	while(x>0){
		if(x % 2 == 1){
			res++;
		}
		x /= 2;
	}
	cout<<res<<endl;
}
