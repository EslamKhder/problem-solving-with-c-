#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
using namespace std;

int main()
{ 
	IOS;
	ll row, col;
	cin >> row >> col;
	ll matrix[row][col];

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cin >> matrix[i][j];
		}
	}

	int r = 0, c = 0;

	while(r < row && c < col)
	{
		for(int i = c; i < col; i++)
		{
			cout << matrix[r][i] << " ";
		}

		r++;

		for(int i = r; i < row; i++)
		{
			cout<< matrix[i][col -1] << " ";
		}

		col--;

		if(r < row)
		{
			for(int i = col - 1; i >= c; i--)
			{
				cout << matrix[row - 1][i] << " ";
			}
			row--;
		}
		if(c < col)
		{
			for(int i = row - 1; i >= r; i--)
			{
				cout << matrix[i][c] << " ";
			}
			c++;
		}
	} 
}
