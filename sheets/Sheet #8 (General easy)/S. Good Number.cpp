#include<bits/stdc++.h>
using namespace std;
int main() //
{
	int size,range,result = 0;
	cin>>size>>range; // 6
	string myRange = "0123456789";
	for(int i=1;i<=size;i++){// 1 2 3 4 5 6 7 8 9 10
		int counter = 0;
		string num;
		cin>>num; // "1234560"
		for(int z=0;z<=range;z++){ // 0 1 2 3 4 5 6
			if(num.find(myRange.substr(z,1)) != string::npos){
				counter++; // 5
			}
		}
		if(counter == range + 1){
			result++;
		}
	}
	cout<<result;
}
