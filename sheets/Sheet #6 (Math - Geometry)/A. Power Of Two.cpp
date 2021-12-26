#include<bits/stdc++.h>
using namespace std;
int main()
{
	/*
8
log(8) / log(2) = 3
10   2^?
log(10) / log(2) = 3.1231
*/
	long long num;
	cin>>num;
	double res = log2(num)/log2(2);
	
	//   3 -  3 = 0
	if((res - (long long)res) != 0){
		cout<<"NO"<<endl;
	} else {
		cout<<"YES"<<endl;
	}
}
/*
8

10

*/
