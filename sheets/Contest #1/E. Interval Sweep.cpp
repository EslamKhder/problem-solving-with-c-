#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num1,num2;
	cin>>num1>>num2; // 4 5  5 4
	
	if((num1 == 0 && num2 == 0) || abs(num1 - num2) >= 2){
		cout<<"NO"<<endl;
	} else {
		cout<<"YES"<<endl;
	}
}
