#include<bits/stdc++.h>
using namespace std;
int main (){
	int testCases; // 3
	cin>>testCases;
	while(testCases--){ // 3 2 1
		long long num1,num2;
		cin>>num1>>num2;
		if(num1 >= num2){
			cout<<1<<" "<<num2;
		} else {
			if(num1*(num1+1) / 2 <num2){
				cout<<-1;
			} else {
				long long arr[100000]={0},index=0,nums=0;
			while(num2){
				if(num2 >= num1){
					arr[index] = num1;
					num1--;
					num2-=arr[index];
					
				} else {
					arr[index] = num2;
					num2 = 0;
				}
				index++;
				nums++;
			}
			cout<<nums<<" "; 
			// [9,8,7]     3 9 8 7
			for(int z=0;z<nums;z++){
				if(z == nums - 1){
					cout<<arr[z];
				} else {
					cout<<arr[z]<<" ";
				}
				
			}
			}
			
		}
		if(testCases != 0){
			cout<<endl;
		}
		
	}
}
