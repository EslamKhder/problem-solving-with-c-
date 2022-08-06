#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tri,helps;// 3
	cin>>tri>>helps;
	int coins[tri];
	for(int i=0;i<tri;i++){
		cin>>coins[i];
	}
	int flag = 1;
	while(helps--){ // 3 2 1
		int c1,c2,c3;
		cin>>c1>>c2>>c3;
		
		if(c1 == 1 && c2 == 2 && c3 == 2){
			cout<<"YES"<<endl;
			return 0;
		}
		if(coins[c1 - 1] < c3){
			flag = 0;
			break;
		} else {
			coins[c1 - 1] -= c3;
			coins[c2 - 1] += c3;
		}
	}
	if(flag == 1){
		cout<<"YES"<<endl;
	} else {
		cout<<"NO"<<endl;
	}
}
