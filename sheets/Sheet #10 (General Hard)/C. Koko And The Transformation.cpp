#include<iostream>
using namespace std;
int main() {
	int size1,size2; // 3 5
	cin>>size1>>size2;
	int num;
	int sum1 = 0, sum2 = 0;
	for(int i=0;i<size1;i++){
		cin>>num;// 6 15 6
		sum1+=num;
	}
	for(int i=0;i<size2;i++){ 
		cin>>num;// 5 12 0 3 7
		sum2+=num;
	}
	if(sum1 == sum2){
		cout<<"Yes"<<endl;
	}else {
		cout<<"No"<<endl;
	}
}
