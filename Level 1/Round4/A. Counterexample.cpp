#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	long long num1,num2; // 7 7
	cin>>num1>>num2;
	
	if(num1 % 2 != 0){
		num1++;
	}
	if(abs(num1 - num2) < 2){ // 7 - 7 = 0
		cout<<-1<<endl;
	} else {
		cout<<num1<<" "<<num1 + 1<<" "<<num1+2<<endl;
	}
	
}
