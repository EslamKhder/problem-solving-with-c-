#include<bits/stdc++.h>
using namespace std;
int main()
{
	string value; // "scd"   ['s','c','d']
	// 0123456789 10 11
	// ahhelllllo o  u  12
	cin>>value;
	//                01234
	string myValue = "hello";
	int i = 0; // 3
	int z = 0;
	while(true){
		if(i == value.size() || z == myValue.size()){
			break;
		}
		if(value[i] == myValue[z]){
			z++; // 2
		}
		i++;
	}
	if(z == 5){
		cout<<"YES"<<endl;
	} else {
		cout<<"NO"<<endl;
	}
}
