#include<bits/stdc++.h>
using namespace std;

long long equ(int num1,int num2){// 5    5 (2,4)
	long long result = 0;
	for(int i=2;i<=num2;i+=2){ // 2 4
		result += pow(num1,i); // 5^2 + 5^4 + 5^6
	}
	return result;
}
int main(){
	int num1,num2;
	cin>>num1>>num2;
	cout<<equ(num1,num2)<<endl;
}
