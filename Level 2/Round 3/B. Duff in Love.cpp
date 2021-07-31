#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{ 
	long long num;
	cin>>num;
	
	for(long long i = 2;i*i <=num;i++){
		if(num % i != 0){
			continue;
		}
		while(num % (i*i) == 0){
			num /= i;
		}
	}
	cout<<num<<endl;
}
