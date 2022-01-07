#include<bits/stdc++.h>
using namespace std;
long long fact(long long num){ // 3
	long long counter = 1;
	long long result = 1;
	while(counter<=num){ // 1 <= 5
		result *= counter;   // 1 * 2 * 3 
		counter++; 
	}
	return result;
}
int main() {
	long long num1,num2;
	cin>>num1>>num2;
	cout<<fact(num1)/(fact(num1 - num2) * fact(num2))<<" ";
	cout<<fact(num1)/(fact(num1 - num2));
    return 0;
}
/*
5
1 * 2 * 3 * 4 * 5
6
1 * 2 * 3 * 4 * 5 * 6


*/
