#include<bits/stdc++.h>
using namespace std;
int main()
{
	string value;  // value[0]
	//          0   1   2   3
	// abba   ['a','b','b','a']
	cin>>value;
	int size = value.size(); // 4
	for(int i=0;i<size/2;i++){ // i = 1
		if(value[i] != value[size - 1 - i]){
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
}
