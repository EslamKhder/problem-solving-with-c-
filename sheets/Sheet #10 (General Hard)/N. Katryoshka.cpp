#include <iostream>
#include<cmath>
using namespace std; 
int main()
{
	long long e,m,b;
	cin>>e>>m>>b;
	if(e == 0 || b == 0){
		cout<<0;
		return 0;
	}
	if(m == 0){
		cout<<min(e/2,b);
	} else if(e > m){
		if(b>(e-m) / 2){
			cout<<min(b -(e-m) /2 , m) + (e-m) / 2;
		} else {
			cout<<min(b,m);
		}
	} else {
		long long myMin = min(e,m);
		cout<<min(myMin,b);
	}
	
}
