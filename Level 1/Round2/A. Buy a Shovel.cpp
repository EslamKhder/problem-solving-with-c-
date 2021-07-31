#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int price,coin;   // 33   3          10 
	cin>>price>>coin;
	int counter = 0;
	int result = 0;
	while(true){
		counter++; // 1 
		result = price * counter; // 33 * 1 = 33   30  3
		
		if(result % 10 == 0 || result % 10 == coin){  // 33 % 10 = 3     33 / 10 = 3   10 10 10 3 
			break;
		}
	}
	cout<<counter<<endl;
}
