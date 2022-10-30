#include<bits/stdc++.h>
using namespace std;
int main()
{
	string value; 
	// 0123..............18
	// happy,NewYear,enjoy   size = 19
	cin>>value;
	for(int i=0;i<value.size();i++){
		if(value[i] == ','){
			cout<<" ";
		} else if (value[i] >= 'a' && value[i] <= 'z') {
			int as = value[i] - 32; // 97 - 32 = 65
			char res = as; // A
			cout<<res;
		} else {
			int as = value[i] + 32; // 97 - 32 = 65
			char res = as; // A
			cout<<res;
		}
	}
}
