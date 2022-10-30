#include<bits/stdc++.h>
using namespace std;
int main(){
	int size;
	cin>>size;
	queue<int> tic;
	while(size--){
		int opr,cost;
		cin>>opr>>cost;
		if(opr == 1){
			tic.push(cost);
		} else {
			if(tic.front() == cost){
				cout<<"Yes"<<endl;
			} else {
				cout<<"No"<<endl;
			}
			tic.pop();
		}
	}
}
