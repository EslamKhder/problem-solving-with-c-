#include<bits/stdc++.h>
using namespace std;
long long fac(long long num1,long long num2){ // 3
	long long res=1;
	long long temp = 2;
	for(int i= num2+1;i<=num1;i++){
		res*=i;
		if(temp <= num1-num2 && res % temp == 0){
			res/=temp;
			temp++;
		}
	}
	return res;
}
int main()
{
	int num1,num2;
	cin>>num1>>num2;
	if(num2 > num1){
		cout<<0<<endl;
	} else {
		cout<<fac(num1,num2);
	}
}
