#include <iostream>
using namespace std;
int main() {
	string value;
	cin>>value;
	int flag = 0;
	for(int i=0;i<value.size();i++){
		if(value[i] == 'W' && value[i+1] == 'U' && value[i+2] == 'B'){
			i += 2;
			if(flag){
				cout<<" ";
			}
			flag = 0;
		} else {
			flag = 1;
			cout<<value[i];
		}
		
	}
}
