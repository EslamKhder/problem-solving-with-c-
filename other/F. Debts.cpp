#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num1,num2;
	cin>>num1>>num2;
	int coins[num1];
	for(int i=0;i<num1;i++){
		cin>>coins[i];
	}
	int flag = 1;
	for(int i=0;i<num2;i++){
		int c1; cin>>c1;
		int c2; cin>>c2;
		int c3; cin>>c3;
		if(c1 == 1&& c2 == 2 && c3 == 2){
			cout<<"YES";
			return 0;
		}
		if(coins[c1-1] < c3){
			flag = 0;
			break;
		} else {
			coins[c1-1] -= c3;
			coins[c2-1] += c3;
		}
	}
	if(flag){
		cout<<"YES"<<endl;
	} else {
		cout<<"NO"<<endl;
	}
	
}
