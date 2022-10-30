#include<bits/stdc++.h>
using namespace std;
int main()
{
	char myChar,resChar; // a
	cin>>myChar;
	int ask = myChar; //97 - 33 = 65
	
	if(ask >= 97 && ask<=122){
		ask -= 32; // 65
		resChar = ask;
		cout<<resChar<<endl;
	} else {
		ask += 32; // 65
		resChar = ask;
		cout<<resChar<<endl;
	}
}
