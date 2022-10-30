#include<bits/stdc++.h>
using namespace std;
int main()
{
	int counter;
	cin>>counter; // 5       1  2  3  4  5    2 / 2 = 1  0     4 / 2 = 2   0    %
	if(counter == 1){
		cout<<-1;
		return 0;
	}
	for(int i=1;i<=counter;i++){
		if(i % 2 == 0){
			cout<<i<<endl;
		}
	}
}
