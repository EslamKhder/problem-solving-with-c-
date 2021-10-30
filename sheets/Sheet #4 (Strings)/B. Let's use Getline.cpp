#include<bits/stdc++.h>
using namespace std;
int main()
{
	string value;  // eslam khder   ['e','s','l','a',.......,'r']
	getline(cin,value);
	// string == array of char   array of char ==  string
	for(int i=0;i<value.size();i++){
		if(value[i] == '\\'){
			break;
		}
		cout<<value[i];
	}
}
