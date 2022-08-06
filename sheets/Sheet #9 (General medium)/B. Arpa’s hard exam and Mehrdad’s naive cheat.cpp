#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long num;
	cin>>num;
	
	if(num % 4 == 0){
		cout<<6<<endl;
	} else if (num % 4 == 1){
		cout<<8<<endl;
	}  else if (num % 4 == 2){
		cout<<4<<endl;
	} else if (num % 4 == 3){
		cout<<2<<endl;
	}
	
}
