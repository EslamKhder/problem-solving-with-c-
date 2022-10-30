#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long size,sizeSqu;
	cin>>size>>sizeSqu;
	long long arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	int arrSqu[sizeSqu];
	for(int i=0;i<sizeSqu;i++){
		cin>>arrSqu[i];
	}
	int z = 0;
	int counter = 0;
	for(int i=0;i<size;i++){
	//  0 1 2	
	//	1 4 7
	//	1 7
		if(arr[i] == arrSqu[z]){
			counter++; // 2 
			z++; // 1
		}
	}
	if(counter == sizeSqu){
		cout<<"YES"<<endl;
	} else {
		cout<<"NO"<<endl;
	}
	
	
}
