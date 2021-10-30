#include<bits/stdc++.h>
using namespace std;
int main()
{
	int testCases;
	cin>>testCases; // 3
	while(testCases--){  // 3 2 1
		int size;
		cin>>size;
		int even=0,odd=0;
		for(int i=0;i<size;i++){ // 3
			int value;
			cin>>value;
			if(value % 2 == 0){
				even++;
			} else {
				odd++;
			}
		}
		if(even == odd){
			cout<<"0"<<endl;
		} else if (size % 2 != 0){
			cout<<"-1"<<endl;
		} else {
			cout<<abs(even-odd) / 2<<endl;
		}
	}
}
