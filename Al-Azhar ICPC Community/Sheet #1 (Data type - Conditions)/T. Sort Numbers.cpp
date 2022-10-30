#include<iostream>
using namespace std;
int main() {
	int num1,num2,num3;
	cin>>num1>>num2>>num3;
	int max,min,def;
	if(num1 >= num2 && num1>= num3){ // max def min
		max = num1;
		if(num2 >= num3){
			def = num2;
			min = num3;
		} else {
			def = num3;
			min = num2;
		}
	} else if(num2 >= num1 && num2>= num3){
		max = num2;
		if(num1 >= num3){
			def = num1;
			min = num3;
		} else {
			def = num3;
			min = num1;
		}
	} else {
		max = num3;
		if(num1 >= num2){
			def = num1;
			min = num2;
		} else {
			def = num2;
			min = num1;
		}
	}
	cout<<min<<"\n"<<def<<"\n"<<max<<"\n"<<endl;
	cout<<num1<<"\n"<<num2<<"\n"<<num3<<endl;
}
