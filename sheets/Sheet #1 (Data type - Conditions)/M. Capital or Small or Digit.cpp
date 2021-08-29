#include<bits/stdc++.h>
using namespace std;
int main()
{
	char myChar;
	cin>>myChar;
	if(myChar>= 97 && myChar<=122){
		cout<<"ALPHA"<<endl;
		cout<<"IS SMALL"<<endl;
	} else if(myChar>= 65 && myChar<=90){
		cout<<"ALPHA"<<endl;
		cout<<"IS CAPITAL"<<endl;
	} else {
		cout<<"IS DIGIT"<<endl;
	}
}
