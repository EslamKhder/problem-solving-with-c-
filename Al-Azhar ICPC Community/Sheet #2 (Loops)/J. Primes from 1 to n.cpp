#include<bits/stdc++.h>
using namespace std;
int prime(int num){
	int div= num/2; // 8     1 2 3 4  8
	for(int i=2;i<=div;i++){
		if(num % i == 0){
			return -1;
		}
	}
	return num;
}
int main()
{
	int counter;
	cin>>counter;
	for(int i=2;i<=counter;i++){
		int res = prime(i); // i  -1 
		if(res != -1){
			cout<<res<<" ";
		}
	}
	
}
