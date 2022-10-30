#include<iostream>
using namespace std;
int main() {
	int number; // ?,??? / 1000
	cin>>number;
	int res = number / 1000; // 4,569
	if(res % 2 == 0){
		cout<<"EVEN"<<endl;
	} else {
		cout<<"ODD"<<endl;
	}
}
