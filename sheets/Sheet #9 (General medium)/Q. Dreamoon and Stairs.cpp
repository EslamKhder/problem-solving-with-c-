//problem q
#include<iostream>
using namespace std ;
int main()
{
	int steps,num,min;
	cin>>steps>>num;
	if(steps % 2 == 0){
		min = steps / 2;
	} else {
		min = (steps / 2) + 1;
	}
	for(int i = min;i<=steps;i++){
		if(i % num == 0){ // 10 / 2 = 5
			cout<<i;
			return 0;
		}
	}
	cout<<-1;
}
