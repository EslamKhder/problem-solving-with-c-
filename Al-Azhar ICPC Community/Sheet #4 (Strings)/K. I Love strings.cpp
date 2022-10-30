#include<bits/stdc++.h>
using namespace std;
int main()
{
	int testCases;
	cin>>testCases; // 2
	while(testCases--){ // 2 1
		string value1,value2;
		cin>>value1>>value2; 
		// 01   0123
		// ey   gpty
		int size = value1.size() + value2.size(); // 6
		int flag1 = 1,flag2 = 1;
		for(int i=0;i<size;i++){ // i = 3
			if(value1.size() != i && flag1){   // 2
				cout<<value1[i];
			} else {
				flag1 = 0;
			}
			if(value2.size() != i && flag2){ // 4
				cout<<value2[i];
			} else {
				flag2 = 0;
			}	
		}
		cout<<endl;
	}
}
