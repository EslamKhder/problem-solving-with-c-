#include<bits/stdc++.h>
using namespace std;
void pre(long long arr[],int size,long long arrf[]){
	arrf[0] = arr[0];	
	for(int i =1;i<size;i++){
		arrf[i] = arrf[i-1] + arr[i];
	}
}
int main(){
	
	long long size,q,num1,num2;;
	cin>>size>>q;
	long long arr[size];
	long long arrPrifx[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	pre(arr,size,arrPrifx);
	while(q--){
		cin>>num1>>num2;
		if(num1 == 1){
			cout<<arrPrifx[num2 - 1]<<endl;
		} else {
			cout<<arrPrifx[num2 - 1] - arrPrifx[num1 - 2]<<endl;
		}
	}
}
