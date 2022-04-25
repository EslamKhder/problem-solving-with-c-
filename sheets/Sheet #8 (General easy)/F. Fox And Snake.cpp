#include<bits/stdc++.h>
using namespace std;
int main() //
{
	int line,sh;// 5 3
	cin>>line>>sh;
	int counter = 0;
	for(int i=0;i<line;i++){// i =0  i<5   0 1 2 3 4
		if(i % 2 == 0){ // 4 / 2 = 2
			for(int x=0;x<sh;x++){
				cout<<"#";
			}
		} else {
			counter++;//2
			for(int z=0;z<sh;z++){ // 0 1 2
				if((counter % 2 == 1 && z == sh - 1) 
				      || (counter % 2 == 0 && z == 0)){
					// 1 % 2 = 1 
					cout<<"#";
				} else {
					cout<<".";
				}
			}
		}
		cout<<endl;
	}
}
