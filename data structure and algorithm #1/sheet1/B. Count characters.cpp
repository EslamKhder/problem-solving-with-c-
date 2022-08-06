#include<bits/stdc++.h>
using namespace std;
int main(){
	string value;
	cin>>value; // ICPCAssuit
	sort(value.begin(),value.end());
	int arr[125] = {0};
	for(int i=0;i<value.size();i++){
		arr[value[i]] = ++arr[value[i]];
		if(arr[value[i]] - 1 > 0){
			value[i] = -1;
		}
	}
	for(int i=0;i<value.size();i++){// i = 1
	if(value[i] != -1){
		cout<<value[i]<<" "<<arr[value[i]]<<endl;

	}
}
}
