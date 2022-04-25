#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	
	long long round,ice;
	cin>>round>>ice;
	int counter = 0;
	for(int i=0;i<round;i++){
		char op;
		long long num;
		cin>>op>>num;
		
		if(op == '+'){
			ice += num; 
		} else {
			if(num <= ice){
				ice -= num;
			} else {
				counter++;
			}
		}
	}
	cout<<ice<<" "<<counter<<endl;
}
