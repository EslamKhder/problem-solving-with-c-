#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int size,dis;
	cin>>size>>dis;
	
	for(int i=0;i<size;i++){ // 0 1 2 3 
		cout<<(char)('a' + (i % dis));
	}
}
