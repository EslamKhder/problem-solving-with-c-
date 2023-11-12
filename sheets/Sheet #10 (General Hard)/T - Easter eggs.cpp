#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
using namespace std;

int main()
{
	IOS;
	string color = "ROYGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVG";
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << color[i];
	}
}
