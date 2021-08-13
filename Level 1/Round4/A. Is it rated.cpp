#include<bits/stdc++.h>
using namespace std;
int main() {
	int size;
	cin>>size;
	int flag1 = 0;
	int flag2 = 0; 
	int temp = 0;
	for(int i=0;i<size;i++){
		int score1,score2;
		cin>>score1>>score2;
		if(score1 != score2){
			flag1 = 1;
			break;
		}
		if(temp < score1 && i != 0){ // 1500
			flag2 = 1;
		}
		temp = score1;
	}	
	if(flag1 == 1){
		cout<<"rated"<<endl;
	} else if(flag2 == 1){
		cout<<"unrated"<<endl;
	} else {
		cout<<"maybe"<<endl;
	}
}
