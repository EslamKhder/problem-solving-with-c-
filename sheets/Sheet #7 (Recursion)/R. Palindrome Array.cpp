#include<bits/stdc++.h>
using namespace std;
int arr[100000];
int size;
bool plin(int index){ // 0
	
	if(index == size){
		return 1;
	}
	return (arr[index] == arr[size - index -1]) && plin(index + 1);
}
// return (arr[0] == arr[5 - 0 -1]) && (arr[1] == arr[5 - 1 -1]) &&  (arr[2] == arr[size - 2 -1]) && plin(index + 1);
int main(){
	
	cin>>size;
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	if(plin(0)){
		cout<<"YES"<<endl;
	} else {
		cout<<"NO"<<endl;
	}
}
