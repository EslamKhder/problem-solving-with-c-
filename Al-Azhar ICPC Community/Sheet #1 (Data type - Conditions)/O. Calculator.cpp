#include<bits/stdc++.h>
using namespace std;  
int main()  
{ 
	string equ; // "15-150"    size = 5
	cin>>equ;
	int indexOpr;
	char charOpr;
	string num1,num2;
	int num1Int,num2Int;
	for(int i=0;i<=equ.size()-1;i++){
		if(equ[i] == '+' || equ[i] =='-' || equ[i] =='*' || equ[i] == '/'){
			indexOpr = i; // 2
			charOpr = equ[i]; // -
			break;
		}
	}
	num1 = equ.substr(0,indexOpr);
	num2 = equ.substr(indexOpr+1);
	stringstream ss1;
	ss1 << num1;
	ss1 >> num1Int;
	stringstream ss2;
	ss2 << num2;
	ss2 >> num2Int;
	switch(charOpr){
		case '+':
			cout<<num1Int + num2Int<<endl;
			break;
		case '-':
			cout<<num1Int - num2Int<<endl;
			break;
		case '*':
			cout<<num1Int * num2Int<<endl;
			break;
		case '/':
			cout<<num1Int / num2Int<<endl;
			break;
		
	}
}
