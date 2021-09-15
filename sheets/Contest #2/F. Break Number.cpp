#include <iostream>
using namespace std ;
int main(){
	int size;
	cin>>size;
	int result = 0;
	for(int i=1;i<=size;i++){ // 1 2 3 4 5
	    int counter =0;
		long long num; //   24 / 2 = 5 / 2 = 2.5   3
		cin>>num;
		if(num % 2 != 0){
			counter = 0;
		} else {
			while(num > 0){
				if(num % 2 != 0){
					break;
				} else {
					counter++;
					num/=2;
				}
			}
		}
		if(counter > result){
			result = counter;
		}
	}
	cout<<result<<endl;
}
