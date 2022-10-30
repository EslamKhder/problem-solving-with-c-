#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size;
	cin>>size;
	//  string s = "13305"      s['1','3','3','0','5']
	//  s['e','v','e','b']      string s = "eveb"
	string value; ///  "13305"    value['1','3','3','0','5']
	// 0   48    1   49   2  50
	cin>>value;
	long long sum = 0; //
	for(int i=0;i<size;i++){
		//      50 - 48  = 2
		sum += value[i] - '0';
	}
	cout<<sum<<endl;
	
	
}
