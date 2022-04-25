#include<bits/stdc++.h>
using namespace std;
int main() //
{
	int size;
	cin>>size;
	if(size<=2){
		cout<<"NO";
		return 0;
	}
	if(size % 2 == 0){
		cout<<"YES";
	} else {
		cout<<"NO";
	}
}
