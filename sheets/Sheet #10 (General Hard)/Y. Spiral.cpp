#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void fast()
{
    cin.tie(0);
    cout.sync_with_stdio(0);
}
bool solve(int x1,int y1,int x2,int y2,int x3,int y3)
{
if((x1==x2&&y1==y2)||(x1==x3&&y1==y3)||(x2==x3&&y2==y3))return false;
    int l1=(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
    int l2=(((x1-x3)*(x1-x3))+((y1-y3)*(y1-y3)));
    int l3=(((x2-x3)*(x2-x3))+((y2-y3)*(y2-y3)));
    vector<int>v;
    v.push_back(l1);
    v.push_back(l2);
    v.push_back(l3);
    sort(v.begin(),v.end());
    int c1=v[0]+v[1];
    int c2=v[2];
    return c1==c2;
}
int main()
{
    fast();
    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    if(solve(x1,y1,x2,y2,x3,y3))cout<<"RIGHT";
    else if(  solve(x1+1,y1,x2,y2,x3,y3)||solve(x1-1,y1,x2,y2,x3,y3)
            ||solve(x1,y1+1,x2,y2,x3,y3)||solve(x1,y1-1,x2,y2,x3,y3)
            ||solve(x1,y1,x2+1,y2,x3,y3)||solve(x1,y1,x2-1,y2,x3,y3)
            ||solve(x1,y1,x2,y2+1,x3,y3)||solve(x1,y1,x2,y2-1,x3,y3)
            ||solve(x1,y1,x2,y2,x3+1,y3)||solve(x1,y1,x2,y2,x3-1,y3)
            ||solve(x1,y1,x2,y2,x3,y3+1)||solve(x1,y1,x2,y2,x3,y3-1)
           )
    {
        cout<<"ALMOST";
    }
    else cout<<"NEITHER";
    return 0;
}

