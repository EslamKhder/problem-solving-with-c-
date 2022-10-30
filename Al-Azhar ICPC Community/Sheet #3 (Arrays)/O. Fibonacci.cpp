#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long position; // 5
	cin>>position;
	long long  start = 0;
	long long  sec = 1;
	if(position == 1){
		cout<<start<<endl;
	} else if(position == 2){
		cout<<sec<<endl;
	} else {
		for(int i=3;i<=position;i++){
			long long  res = start + sec;
			start = sec;
			sec = res;
		}
		cout<<sec<<endl;
	}
	
	
}
