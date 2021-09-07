#include<bits/stdc++.h>
using namespace std;
int main()
{
	int lines; // 4
	cin>>lines;
	int spaces = lines-1; // 3
	for(int i=1;i<=lines;i++){
		for(int z=1;z<=spaces;z++){ // z=1  z<=2
		cout<<" ";	
		}
		for(int x=1;x<i*2;x++){ 
		// x=1  x<6   1 2 3 4 5
			cout<<"*";
		}
		spaces--;
		cout<<endl;
	}
}
