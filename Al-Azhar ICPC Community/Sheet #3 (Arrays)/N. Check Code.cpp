#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num1,num2; // 3 3
	cin>>num1>>num2;
	string code; // code = "26$-665"
	//              0   1   2   3   4   5   6 
	//        code['2','6','9','-','6','6','5']
	// 0 1 2 3 4 5 6 7 8 9
  //  '0' '1' .......... '9'
  //  '0'  '1'  '2'  '3'  '4'  '5'  '6'  '7'  '8'  '9' 
  //  48 49 50 51 52 53 54 55 56 57
	cin>>code;
	if(num1+num2+1 != code.size()){
		cout<<"No"<<endl;
		return 0;
	}
	if(code[num1] != '-'){
		cout<<"No"<<endl;
		return 0;
	}
	int counter = 0;
	for(int i=0;i<code.size();i++){
		if(code[i] >= 48 && code[i] <=57 && i != num1){
			counter++; // 6
		}
	}
	if(counter == num1+num2){
		cout<<"Yes"<<endl;
	} else {
		cout<<"No"<<endl;
	}
	
}
