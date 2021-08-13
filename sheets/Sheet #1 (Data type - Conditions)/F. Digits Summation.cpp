#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long num1,num2;
	cin>>num1>>num2;
	int lastNum1 = num1 % 10;
	int lastNum2 = num2 % 10;
	cout<<lastNum1+lastNum2<<endl;
}
