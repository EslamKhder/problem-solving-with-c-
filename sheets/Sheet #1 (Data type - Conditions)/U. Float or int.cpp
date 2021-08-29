#include<iostream>
using namespace std;
int main() {
	double num; // 234.450  234.000
	cin>>num;
	int numInt = num; // 234
	double res = num - numInt;
	if(res != 0){
		cout<<"float "<<numInt<<" "<<res<<endl;
	} else {
		cout<<"int "<<numInt<<endl;
	}
}
