#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size;
	cin>>size;
	long long sum = 0;  // 10
	for(int i=1;i<=size;i++){ // 4   1 2 3 4
		int num;
		cin>>num; // 7  2 1
		sum+=num; // sum = sum + num     9 + 1 = 10 
	}
	cout<<abs(sum)<<endl;
}
