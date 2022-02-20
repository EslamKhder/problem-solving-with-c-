#include<bits/stdc++.h>
using namespace std;
void print(int num){ // 0
	if(num == 0){
		return;
	}
	print(num / 2);
	cout<<num%2;
	
}
/*
void print(int num){ // 10
	if(num == 0){
		return;
	}
	------------ ------- print(num / 2); // 5
	void print(int num){ // 5
	if(num == 0){
		return;
	}
	--------------------- print(num / 2); // 2
	void print(int num){ // 0
		if(num == 0){
			return;
		}
		------------------- print(num / 2); // 1
		void print(int num){ // 0
			if(num == 0){
				return;
			}
			print(num / 2); 0
			cout<<num%2; // 1 % 2                 // 1010
			
		}
		cout<<num%2; // 2 % 2
		
	}
	cout<<num%2;  // 5%2
	--------------------------------
	
}
	
	cout<<num%2;  // 10%5
	
}

*/
int main()
{
	int testCase;// 2
	cin>>testCase;
	while(testCase--){ // 2 1
		int num;
		cin>>num;
		print(num);
		cout<<endl;
	}   
}
