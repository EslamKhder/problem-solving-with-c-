#include<bits/stdc++.h>
using namespace std;
int main() //
{
	int size;
	cin>>size; // 2
	int coun = 0;
	for(int i=1;i<=size;i++){ // 1 2
		int num1,num2;
		cin>>num1>>num2;
		if(num2 - num1 >= 2){
			coun++;
		}
	}
	cout<<coun;
}
