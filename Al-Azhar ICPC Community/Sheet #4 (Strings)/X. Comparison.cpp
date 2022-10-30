#include<bits/stdc++.h>
using namespace std;
int main ()
{
	string value,sub1 = "",sub2;
	cin>>value;   // acmicpc
	string myValue = value;  // acmicpc
	// 0123456
	// acmicpc
	string smallString = value;
	for(int i = 0;i<value.length()-1;i++){
		sub1 += value[i]; // "acm"
		myValue.erase(0,1); // "icpc"
		sub2 = myValue;   // "micpc"
		sort(sub1.begin(),sub1.end()); //  "a"
		sort(sub2.begin(),sub2.end()); //  "cccimp"     acccimp   
		smallString = min(smallString,sub1+sub2);
	}
	cout<<smallString<<endl;
}
