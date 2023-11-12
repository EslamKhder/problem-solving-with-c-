#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
using namespace std;

int main()
{
	IOS;
	int A = 0, B = 0, C = 0;
	char c1, op, c2;

	for (int i = 0; i < 3; i++)
	{
		cin >> c1 >> op >> c2;

		if (c1 == 'A')
		{
			if (op == '>')
			{
				A++;
			}
			else if (op == '<')
			{
				if (c2 == 'B')
				{
					B++;
				}
				else if (c2 == 'C')
				{
					C++;
				}
			}
		}
		else if (c1 == 'B')
		{
			if (op == '>')
			{
				B++;
			}
			else if (op == '<')
			{
				if (c2 == 'A')
				{
					A++;
				}
				else if (c2 == 'C')
				{
					C++;
				}
			}
		}
		else if (c1 == 'C')
		{
			if (op == '>')
			{
				C++;
			}
			else if (op == '<')
			{
				if (c2 == 'A')
				{
					A++;
				}
				else if (c2 == 'B')
				{
					B++;
				}
			}
		}
	}

	if (A == B && B == C)
	{
		cout << "Impossible";
	}
	else
	{
		int weight[3] = { A, B, C };
		char coins[3] = { 'A', 'B', 'C' };

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3 - i - 1; j++)
			{
				if (weight[j] > weight[j + 1])
				{
					swap(weight[j], weight[j + 1]);
					swap(coins[j], coins[j + 1]);
				}
			}
		}

		for (char c : coins)
		{
			cout << c;
		}
	}
}
