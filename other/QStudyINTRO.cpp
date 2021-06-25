#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	stack<string> stack;
	int flag = 1;
	int counter = 0;
	int size;
	cin>>size;
	while(size--){  // 8
		string value;
		cin>>value;
		
		if(flag && value != "Header"){
			cout<<"WA"<<endl;
			return 0;
		}
		flag = 0;
		if(value == "Header"){
			counter++;
		}
		if(counter > 1){
			cout<<"WA"<<endl;
			return 0;
		}
		if(stack.empty()){
			stack.push(value);
		} else {
			if("End"+stack.top() == value){
				stack.pop();
			} else {
				stack.push(value);
			}
		}
	}
	if(stack.empty()){
		cout<<"ACC"<<endl;
	} else {
		cout<<"WA"<<endl;
	}
}
