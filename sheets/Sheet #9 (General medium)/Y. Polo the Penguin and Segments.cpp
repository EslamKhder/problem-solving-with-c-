#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long size,num,cover = 0;
	cin>>size>>num;
	for(int i=0;i<size;i++){
		int x,y;
		cin>>x>>y;
		cover+= (y-x+1);
	}
	cover%=num; // cover = cover % num;
	if(cover == 0){
		cout<<0;
	}else {
		cout<<num-cover;
	}
}
