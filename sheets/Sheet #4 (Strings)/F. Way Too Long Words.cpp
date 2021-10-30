#include<bits/stdc++.h>
using namespace std;
int main()
{
	int wordSize; // 4
	cin>>wordSize;
	while(wordSize--){ // 4 3 2 1
		string value; 
		// 0123456789 10 11
		// localizati o  n
		cin>>value;
		int size = value.size(); // 12
		if(size > 10){
			cout<<value[0]<<size-2<<value[size-1]<<endl;
		} else {
			cout<<value<<endl;
		}
	}
	
	
}
