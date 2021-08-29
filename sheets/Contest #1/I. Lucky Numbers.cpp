#include<bits/stdc++.h>
using namespace std;
int main()
{
	string num;
	cin>>num; // "10"   ['1','0']     0 / 1 = 0   
	int num1 = num[0] - '0'; // 3
	int num2 = num[1] - '0'; // 9
	if(num2 == 0){
		cout<<"YES"<<endl;
	}else if(num1 % num2 == 0 || num2 % num1 == 0){
		cout<<"YES"<<endl;
	} else {
		cout<<"NO"<<endl;
	}
	
}
