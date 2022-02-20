#include<bits/stdc++.h>
using namespace std;
int input;//4
void print(int num){
	
	if(num == 0){
		return;
	}
	print(num-1);
	for(int i=1;i<=input-num ;i++){
		cout<<" ";
	}
	for(int i=1;i<= num*2 -1;i++){
		cout<<"*";
	}
	cout<<endl;
}
/*
void print(int num){//4
	
	if(num == 0){
		return;
	}
	------------------------------ print(num-1); 3
	void print(int num){
	
		if(num == 0){
			return;
		}
		------------------------------------- print(num-1); // 2
		void print(int num){
	
			if(num == 0){
				return;
			}
			------------------------------------ print(num-1); // 1
			void print(int num){
	
				if(num == 0){
					return;
				}
				print(num-1);
				for(int i=1;i<=input-num ;i++){ //input 4  num 1
					cout<<" ";
				}
				for(int i=1;i<= num*2 -1;i++){
					cout<<"*";
				}
				cout<<endl;
			}
			for(int i=1;i<=input-num ;i++){//input 4 num 2
				cout<<" ";
			}
			for(int i=1;i<= num*2 -1;i++){
				cout<<"*";
			}
			cout<<endl;
		}
		for(int i=1;i<=input-num ;i++){// input = 4  num 3
			cout<<" ";
		}
		for(int i=1;i<= num*2 -1;i++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=1;i<=input-num ;i++){ // num= 4   input 4
		cout<<" ";
	}
	for(int i=1;i<= num*2 -1;i++){
		cout<<"*";
	}
	cout<<endl;
}


*/
int main(){
	int num;
	cin>>num;
	input=num;
	print(num);
}
