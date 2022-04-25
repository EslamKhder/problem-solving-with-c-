#include<bits/stdc++.h>
using namespace std;
int main() //
{
	int num1,num2,num3; // 7 1 4   7 - 1 = 6
	cin>>num1>>num2>>num3;
	cout<<max(max(num1,num2),num3) - min(min(num1,num2),num3);
}
