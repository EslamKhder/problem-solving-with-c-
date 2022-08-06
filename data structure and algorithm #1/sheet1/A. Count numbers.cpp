#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[100000] = {0},num1,num2;;
	
	int n,q;
	cin>>n>>q;// q = 7
	for(int i=0;i<q;i++){ // 0 1 2 3 4 5 6
		cin>>num1>>num2;
		if(num1 ==  1){
			arr[num2] = ++arr[num2];
		} else {
			cout<<arr[num2]<<endl;
		}
	}
}
