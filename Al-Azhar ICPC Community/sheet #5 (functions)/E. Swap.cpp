#include<bits/stdc++.h>
using namespace std;
void swap(int *num1,int *num2){
	int *box = num1;
	num1 = num2;
	num2 = box;
}
int main(){
	int num1,num2;
	cin>>num1>>num2;
	swap(num1,num2);
	cout<<num1<<" "<<num2;
}
