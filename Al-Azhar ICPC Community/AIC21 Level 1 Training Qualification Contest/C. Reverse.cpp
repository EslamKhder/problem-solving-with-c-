#include<bits/stdc++.h>
using namespace std;
int main()
{
	string num;
	 
	// "12364"   
	//  0   1   2   3   4 
	//['1','2','3','6','4']     5
	cin>>num;
	for(int i=num.size() - 1;i>=0;i--){// i = 0   0 >= 0     4 3 2 1 0
		cout<<num[i]<<endl;
	}	
}
