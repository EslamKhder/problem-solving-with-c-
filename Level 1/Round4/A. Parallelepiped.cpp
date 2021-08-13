#include<bits/stdc++.h>
using namespace std;
int main()
{
	int edge1,edge2,edge3;
	cin>>edge1>>edge2>>edge3;
	int res1 = sqrt((edge1 *edge2) / edge3);
	int res2 = sqrt((edge1 *edge3) / edge2);
	int res3 = sqrt((edge2 *edge3) / edge1);
	int sum = (res1 + res2 + res3) * 4;
	cout<<sum<<endl;
}
