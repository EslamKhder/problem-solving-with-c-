#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size,a=0,m=0; // 5
	cin>>size;
	char c;
	while(size--){ // 5 4 3 2 1
		cin>>c;
		if(c == 'A'){
			a++;
		} else {
			m++;
		}
	}
	if(a == m){
		cout<<"Friendship"<<endl;
	} else if(a > m){
		cout<<"Ahmed"<<endl;
	} else {
		cout<<"Mostafa"<<endl;
	}
}
