#include<bits/stdc++.h>
using namespace std;
int main()
{
	char letter;
	cin>>letter;
	int askChar = letter; // 97
	if(askChar == 122){
		cout<<'a'<<endl;
		return 0;
	}
	++letter; // newAskCher = 98     letter = 98
	cout<<letter<<endl;
}
