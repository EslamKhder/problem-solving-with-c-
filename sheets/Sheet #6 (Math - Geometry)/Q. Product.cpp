#include <bits/stdc++.h>
using namespace std;
int main() {
	long long num1,num2,num3;
	cin>>num1>>num2>>num3;
	long long ma = max(num1,num2);//5
	long long mi = min(num1,num2);// 1
	long long result = 1;
	for(int i=mi;i<=ma;i++){ // 1 2 3...5  
		result*=i;
		result%=num3;
	}
	cout<<result<<endl;
}
