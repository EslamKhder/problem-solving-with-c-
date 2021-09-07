#include<bits/stdc++.h>
using namespace std;
int main()
{
	int number,range1,range2;
	cin>>number>>range1>>range2;
	long long sum = 0;
	for(int i=1;i<=number;i++){
		if(i / 10 == 0){
			if(i>=range1 && i<=range2){
				sum += i;
			}
		} else {
			int myNumber = i; // 12
			int mySum = 0;
			while(myNumber){ // 1
				int digit = myNumber % 10; // 1
				mySum += digit; // 2 + 1 = 3
				myNumber /= 10; // 1 / 10 = 0
			}
			if(mySum >= range1 && mySum <= range2){
				sum += i;
			}
		}
	}
	cout<<sum<<endl;	
}
