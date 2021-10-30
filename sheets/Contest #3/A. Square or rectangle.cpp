#include<bits/stdc++.h>
using namespace std;
int main()
{
	int counter;
	int num1,num2;
	cin>>counter; // 3
	while(counter--){ // 3 2 1
		cin>>num1>>num2;
		if(num1 == num2){
			cout<<"Square"<<endl;
		} else {
			cout<<"Rectangle"<<endl;
		}
	}
	
}
