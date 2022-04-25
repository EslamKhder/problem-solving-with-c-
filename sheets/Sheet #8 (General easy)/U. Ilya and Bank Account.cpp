#include <bits/stdc++.h>
using namespace std;
int main()
{
	string num1;
	cin>>num1; 
	long long maxNum = stoi(num1);  // -100003
	//  012345      7
	// "-10000"
	
	string save = num1; 
	//  012346      7
	// "-10003" 
	num1.erase(num1.size() - 1,1);
	save.erase(save.size() - 2,1);
	long long res = max(maxNum,max((long long)stoi(num1),(long long)stoi(save)));
	cout<<res; // 7
	return 0;
}
