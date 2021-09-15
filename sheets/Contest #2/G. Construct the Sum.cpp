#include<bits/stdc++.h>
using namespace std;
int res[1000005];
int main()
{
	// n*(n+1) / 2    5    5 4 3 2 1
	long long counter; 
	cin>>counter;
	long long cou = 0;
	for(int i=0;i<counter;i++){
		long long num1,num2;
		cin>>num1>>num2;
		if(num1*(num1+1) / 2 < num2){
			cout<<-1;
		} else {
			long long sum = 0;  // 10
			
			for(int z=num1;z>=1;z--){// 7 6 5 4 3 2 1
				if(sum+z <= num2){ // 7+3 <= 10
					sum+=z;
					res[cou] = z; // 0 1 2
					cou++; // 3
				}
				if(sum == num2){
					break;
				}
			}
		}
		for(int x=0;x<cou;x++){ 
			cout<<res[x]<<" ";
		}
		cout<<endl;
		cou = 0;
	}
}
