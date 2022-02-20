#include<bits/stdc++.h>
using namespace std;
long long fact(long long num){ // 3
	if(num <= 1){
		return 1;
	}
	return num * fact(num - 1); // 5 * 4 * 3 * 2 * 1
}
int main()
{
	long long num;
	cin>>num;
	cout<<fact(num);
}
