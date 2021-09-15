#include<bits/stdc++.h>
using namespace std;
int main()
{
	int counter; // 5
	cin>>counter;
	for(int i=0;i<counter;i++){ //  i = 0
		for(int z=0;z<counter;z++){ // z = 0
			if(i == z && i != counter/2 && z != counter/2){
				cout<<"\\";
			} else if (i == counter/2 && z == counter/2){
				cout<<"X";
			} else if(z != counter/2 && i == ((counter-1)-z)){
				cout<<"/";
			} else {
				cout<<"*";
			}
		}
		cout<<endl;
	}
}
