#include<bits/stdc++.h>
using namespace std;
int main()
{
	int counter; //4
	cin>>counter;
	for(int i=1;i<=counter;i++){ // i=1  i=2
		for(int z=counter;z>=i;z--){ // z = 4   z>=i 4>=2  z-- 4 3 2 
			cout<<"*";
		}
		cout<<endl;
	}
}
