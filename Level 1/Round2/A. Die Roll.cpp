#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int val1,val2; // 4 2
	cin>>val1>>val2;
	string pro[6] = {"1/1","5/6","2/3","1/2","1/3","1/6"}; // 0 1 2 3 4
	int myValue = max(val1,val2); // 4 - 1

	cout<<pro[myValue - 1]<<endl; //0.5
}
