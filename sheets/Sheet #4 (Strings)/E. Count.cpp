#include<bits/stdc++.h>
using namespace std;
int main()
{
	string num;
	//  012
	// "351"
	cin>>num;
	long long sum = 0;
	for(int i=0;i<num.size();i++){ // 0 1 2
		sum += num[i] - '0';
	}
	cout<<sum<<endl;
}
