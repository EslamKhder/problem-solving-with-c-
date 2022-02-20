#include<bits/stdc++.h>
using namespace std;
int index = 0; // 2
void print(string num){ 

	if(index == num.size()){
		return;
	}
    //  01234
    // "12345"
	cout<<num[index]<<" "; // 1 2 3 4 5
	index++;
	return print(num); //
}
int main()
{
	int testCase;
	cin>>testCase;
	while(testCase--){// 3 2 1
		string num; // 121
		cin>>num;
		print(num);
		cout<<endl;
		index=0;
	}
}
