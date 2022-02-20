#include<bits/stdc++.h>
using namespace std;
int counter = 0;
void log(long long num){ // 8
	
	if(num == 1){
		return;
	}
	counter++; // 3
	log(num/2);// 1
}
int main(){
	long long num;
	cin>>num;
	log(num);
	cout<<counter<<endl;
}
