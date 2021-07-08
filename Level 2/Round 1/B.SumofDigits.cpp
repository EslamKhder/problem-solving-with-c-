#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sum(int value){  // 123
	int result = 0;
	while(value != 0){
		result += value %10; // 123 % 10 = 3
		value /= 10; // 123/10 = 12
	}
	return result;
}
int main(){
	string num; // 99999999999999999999999999999999999999
	cin>>num;
	int result = 0;
	int cou = 1;
	if(num.length() == 1){
		cout<<"0"<<endl;
		return 0;
	}
	
	for(int i=0;i<num.length();i++){
		result += num[i] - '0'; // 6
	}
	while(result >= 10){ // 123 > 9
		result = sum(result); // num 6
		cou++;
	}
	cout<<cou<<endl;
}

