#include<bits/stdc++.h>
using namespace std;
int main()
{
	double num1,num2,num3;
	cin>>num1>>num2>>num3;
	double result = (num1*num2) / num3;     // 35.3
	long long myNumber = result;           // 35
	double myRes = result - myNumber;      // .3
	if(myRes > 0){
		cout<<"double"<<endl;
	}else if(myNumber <= 2147483647){
		cout<<"int"<<endl;
	} else {
		cout<<"long long"<<endl;
	}
	
	
}
