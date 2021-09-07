#include<bits/stdc++.h>
using namespace std;
int main(){
	int numberTest;
	cin>>numberTest; // 3    0 1 2
	long long num;
	for(int i=0;i<numberTest;i++){
		cin>>num;
		int ones = 0;
		while(num > 0){
			if(num % 2 == 1){
				ones++;
			}
			num /=2;
		}
		long long sum = 0;
		for(int z=0;z<ones;z++){
			sum+= 1 * pow(2,z); //
		}
		cout<<sum<<endl;
	}
	
}
