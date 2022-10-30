#include<bits/stdc++.h>
using namespace std;
int main()
{
	int counter;
	cin>>counter;
	for(int i=1;i<=counter;i++){
		//                          0   1    2  
		string number; // 123     ['1','2','3']
		cin>>number;
		int size = number.size(); // 3
		for(int z =size-1;z>=0;z--){ // z<=4
			cout<<number[z]<<" ";
		}
		cout<<endl;
	}
}
