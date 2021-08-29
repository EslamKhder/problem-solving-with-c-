#include<bits/stdc++.h>
using namespace std;
void validate(int result,int myResult){
	if(myResult == result){
		cout<<"Yes"<<endl;
	} else {
		cout<<myResult<<endl;
	}
	return;
}
int main()
{
	int num1,num2,result;
	char opr,oprRes;
	int myResult = 0;
	cin>>num1>>opr>>num2>>oprRes>>result;
	
	switch(opr){
		case '+':
			myResult = num1 + num2;
			validate(result,myResult);
		break;
		case '-':
			myResult = num1 - num2;
			validate(result,myResult);
		break;
		case '*':
			myResult = num1 * num2;
			validate(result,myResult);
		break;
	}
}
