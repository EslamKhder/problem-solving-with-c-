#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num1,num2,num3,num4;
	cin>>num1>>num2>>num3>>num4;
	int newNum1 = num1 % 100;
	int newNum2 = num2 % 100;
	int newNum3 = num3 % 100;
	int newNum4 = num4 % 100;
	int result = (newNum1 * newNum2 * newNum3 *newNum4);
	if(result % 100 <= 9){
		cout<<"0"<<result % 100<<endl;// 01
	} else {
		cout<<result % 100<<endl;
	}
	
}
