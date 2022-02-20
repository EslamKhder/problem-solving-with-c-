#include<bits/stdc++.h>
using namespace std;
int counter =0;
void proces(long long num){
	counter++;
	if(num == 1){
		return;
	}
	if(num % 2 == 0){
		proces(num/2);
	}else {
		proces(3*num + 1);
	}
}
int main(){
	long long num;
	cin>>num;
	proces(num);
	cout<<counter;
}
