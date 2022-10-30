#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num1,num2,num3;
	cin>>num1>>num2>>num3;
	int res = 0;
	if(num1 + num3 <= num2){
		res = num2 - (num1 + num3) + 1;
	} else if (num2 + num3 <= num1){
		res = num1 - (num2 + num3) + 1;
	} else if (num1 + num2 <= num3){
	    res = num3 - (num1 + num2) + 1;
	}
	cout<<res;
}
