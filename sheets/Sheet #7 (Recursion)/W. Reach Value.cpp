#include<bits/stdc++.h>
using namespace std;
long long input;
bool reachValue(long long num){ // 1
	if(input < num){
		return false;
	} else if (input == num){
		return true;
	} else {
		return reachValue(num * 10) || reachValue(num * 20);
	}
}
int main(){
	long long tests;//5
	cin>>tests;
	while(tests--){ // 5 4 3 2 1 0
		cin>>input;
		if(reachValue(1)){
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
	}
}
