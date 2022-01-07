#include<bits/stdc++.h>
using namespace std;
long long GCD(long long num1,long long num2){
	while(num2 != 0){
		long long temp = num1;
		num1 = num2;
		num2 = temp % num1;
	}
	return num1;
}
long long LCM(long long num1,long long num2){
	return (num1 / GCD(num1,num2)) * num2;
}
int main() {
	long long num1,num2;
	cin>>num1>>num2;
	cout<<GCD(num1,num2)<<" "<<LCM(num1,num2)<<endl;
}
