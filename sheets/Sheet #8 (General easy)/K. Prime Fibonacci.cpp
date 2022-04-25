#include<bits/stdc++.h>
using namespace std;
int main() //
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int num;
    bool prime[51] = { 0,0,0,0,1,1,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0 };
    int t;
	cin>>t;
	while(t--){
		cin>>num;
		if(prime[num] == 1)
		  cout<<"prime\n";
		  else 
		  cout<<"not prime\n";
	} 
}
