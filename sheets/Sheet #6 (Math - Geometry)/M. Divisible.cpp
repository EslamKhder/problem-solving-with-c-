#include<bits/stdc++.h>
using namespace std;
int main() {
	string num1; 
	 // 01
	// "15"
	int num2;  // 3
	cin>>num1>>num2;
	long long res = 0;
	for(int i=0;i<num1.size();i++){ // 0 1 
		res *= 10;
		res += num1[i] - '0';
		res %= num2;
	}
	if(res == 0){
		cout<<"YES"<<endl;
	} else {
		cout<<"NO"<<endl;
	}
}
