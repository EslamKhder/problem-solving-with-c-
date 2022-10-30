#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num;
	cin>>num;
	int start = 2,res = 1;
	while(true){
		if(start > num / 2){
			break;
		}
		if((num - start) % start == 0){
			res++;
		}
		start++;
	}
	cout<<res;
}
