#include <bits/stdc++.h>
using namespace std ;
int main()
{
	long long seet;
	cin>>seet;
	long long row = seet /4;  // 5 / 4 = 1
	long long column;
	if(row % 2 == 0){ // 0 / 2 = 0   5/2=2.5
		column = seet %4; // 2 % 4 = 2
	} else {
		column = 3-(seet%4); // 3 - 1 = 2
	}
	cout<<row<<" "<<column<<endl;
}
