#include<bits/stdc++.h>
using namespace std;
int main()
{
	int lines;
	cin>>lines;
	int spaces1 = lines - 1; // 3
	for(int i=1;i<=lines;i++){
		for(int z=1;z<=spaces1;z++){
			cout<<" ";
		}
		for(int x =1;x<i*2;x++){ // x = 1  i = 3    x<6  1 2 3 4 5
			cout<<"*";
		}
		cout<<endl;
		spaces1--;
	}
	spaces1 = 1;
	for(int i=lines;i>=1;i--){ // 4 3 2 1
		for(int z=1;z<spaces1;z++){ // z=1 z<4
			cout<<" ";
		}
		for(int x =i*2;x>1;x--){ // x = 8   8>1   * 8 7 6 5 4 3 2
			cout<<"*";
		}
		cout<<endl;
		spaces1++;
	}
	
}
