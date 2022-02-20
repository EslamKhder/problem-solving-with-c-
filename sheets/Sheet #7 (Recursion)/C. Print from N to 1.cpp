#include<bits/stdc++.h>
using namespace std;
int flag = 0;
void print(int num){ // 1
	if(num == 0){
		return;
	}
	if(flag){
		cout<<" ";
	}
	cout<<num--;    // 4 3 2 1        num--   --num
	flag = 1;
	// num = 0
	return print(num);
}
int main()
{
	int num;
	cin>>num;
	print(num);
}
