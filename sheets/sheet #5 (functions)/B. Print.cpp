#include<bits/stdc++.h>
using namespace std;
void print(int num){
	for(int i=1;i<=num;i++){ // 1 2 3 4 5 6 
	    if(i != 1){
	    	cout<<" ";
		}
		cout<<i; // 1 2 3 4 5
	}
}
int main()
{
	int num1;
	cin>>num1; //  5
	print(num1);
	
}
