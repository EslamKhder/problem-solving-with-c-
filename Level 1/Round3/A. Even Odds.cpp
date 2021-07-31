#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long num,position;
	cin>>num>>position;
	if((num + 1) / 2 >= position){
		cout<<position * 2 - 1<<endl;
	} else {
		cout<<(position - (num + 1) / 2) * 2<<endl;
	}
}
