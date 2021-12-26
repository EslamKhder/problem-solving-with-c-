#include<bits/stdc++.h>
using namespace std;
long long sumOdd(long long num){
	long long res = (num + 1) / 2;
	long long finalRes = res * res;
	return finalRes;	
}
long long sumEven(long long num){
	long long res = (num*(num+1));
	return res;
}
int main() {
	int num1,num2;
	cin>>num1>>num2;
	int start,end;
	if(num1 >= num2){
		start = num2;
		end = num1;
	} else {
		start = num1;
		end = num2;
	}
	long long evenRes = sumEven(end/2) - sumEven((start-1) / 2);
	long long oddRes = sumOdd(end) - sumOdd(start - 1);
	cout<<evenRes+oddRes<<endl;
	cout<<evenRes<<endl;
	cout<<oddRes<<endl;
}
