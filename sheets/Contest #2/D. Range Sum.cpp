#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long size;
	cin>>size;
	while(size--){ // 4 3 2 1 
		long long num1,num2; // 3 6
		long long ma,mi;
		cin>>num1>>num2;
		ma = max(num1,num2);
		mi = min(num1,num2); // 3
		mi--;
		long long result1 = mi*(mi+1) / 2;  //
		long long result2 = ma*(ma+1) / 2;  //
		cout<<result2 - result1<<endl;
	}
}
