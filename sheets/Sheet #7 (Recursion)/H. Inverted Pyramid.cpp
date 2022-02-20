#include<bits/stdc++.h>
using namespace std;
int input;
void print(int num){
	if(num == 0){
		return;
	}
	for(int i =1;i<=input-num;i++){
		cout<<" ";
	}
	for(int i =1;i<=num*2-1;i++){
		cout<<"*";
	}
	cout<<endl;
	print(num-1);
}
int main(){
	int num;
	cin>>num;
	input = num;
	print(num);
}
