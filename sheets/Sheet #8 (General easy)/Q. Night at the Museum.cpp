#include<bits/stdc++.h>
using namespace std;
int main() //
{
	string value;
	cin>>value;// "zeus"  4
	int start = 97; // 98
	int steps = 0;
	for(int i=0;i<value.size();i++){ // 0 1 2 3
		int result = abs(value[i] - start); // 97 - 98 = 1
		if(result <= 13){
			steps+= result;
		} else {
			steps += (26 - result);
		}
		start = value[i];
	}
	cout<<steps<<endl;
}
