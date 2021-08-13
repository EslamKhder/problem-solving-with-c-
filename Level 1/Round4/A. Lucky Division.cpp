#include<bits/stdc++.h>
using namespace std;
int main()
{
	int lucky[12]={4,7,44,47,47,444,447,474,477,777,774,744};
	int num; // 78
	cin>>num;
	int flag = 0;
	for(int i=0;i<12;i++){ // 4 / 2 = 2   5 / 2 = 2   1
		if(num % lucky[i] == 0){
			flag = 1;
			break;
		}
	}
	if(flag == 1){
		cout<<"YES"<<endl;
	} else {
		cout<<"NO"<<endl;
	}
}
