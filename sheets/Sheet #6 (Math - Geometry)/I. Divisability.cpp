#include<bits/stdc++.h>
using namespace std;
long long sum (long long n){
    return n * (n + 1) / 2;
}
int main() {
	long long num1,num2,c;
	cin>>num1>>num2>>c;
	long long ma = max(num1,num2);
	long long mi = min(num1,num2);
	cout<<(sum(ma/c) * c) - (sum((mi-1) / c) * c);
}
