#include<bits/stdc++.h>
using namespace std;
void print(int times,char c){ // 5
	for(int i=1;i<=times;i++){// 1 2 3 4 5
		cout<<c<<" ";
	}
}
int main(){
	int lines; // 5
	cin>>lines;
	
	while(lines--){ // 5 4 3 2 1
		int t;
		cin>>t;
		char c;
		cin>>c;
		print(t,c);
		cout<<endl;
	}
}
