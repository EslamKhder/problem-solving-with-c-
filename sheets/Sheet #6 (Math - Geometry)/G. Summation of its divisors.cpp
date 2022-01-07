#include<bits/stdc++.h>
using namespace std;

int main() {

	long long num; // 12
	cin>>num;
	long long result = 0;
	// cout<<sqrt(num);   3.464128
	for(int i=1;i<=sqrt(num);i++){
		if(num % i == 0){
			result += i;
			if(i != sqrt(num)){
				result+=num/i;
			}
		}
	}
	cout<<result<<endl;
}
