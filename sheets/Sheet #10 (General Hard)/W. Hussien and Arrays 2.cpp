#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void fast()
{
    cin.tie(0);
    cout.sync_with_stdio(0);
}
int main()
{
	fast();
	int size,res = -1;
	cin>>size;
	int arr[size];
	priority_queue<pair<int,int> > p;
	for(int i=0;i<size;i++){
		cin>>arr[i];
		p.push({arr[i],i});
	}
	for(int i=0;i<size;i++){
		while(p.size() > 0 && p.top().first >= arr[i]){
			res = max(res,p.top().second - i);
			p.pop();
		}
	}
	cout<<res;
}

