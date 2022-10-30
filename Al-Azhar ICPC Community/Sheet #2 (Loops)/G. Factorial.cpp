#include<bits/stdc++.h>
using namespace std;
int main()
{
	int counter; // 2
	cin>>counter;
	long long fac = 1; 
	while(counter--){ // 0
		int num; // 3
		cin>>num; // 3
		for(int i=1;i<=num;i++){ // 5    1 * 2 * 3 * 4 * 5
			fac *= i; // fac = fac * i; // 120
		}
		cout<<fac<<endl; // 120
		fac = 1;
	}
}
