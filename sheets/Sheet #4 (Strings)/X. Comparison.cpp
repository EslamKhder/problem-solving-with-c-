#include<bits/stdc++.h>
using namespace std;
int main ()
{
	/*
		All possible strings that can be obtained :
	
		a + cmicpc : after sorting each part > a + cccimp = acccimp
		ac + micpc : after sorting each part > ac + ccimp = acccimp
		acm + icpc : after sorting each part > acm + ccip = acmccip
		acmi + cpc : after sorting each part > acim + ccp = acimccp
		acmic + pc : after sorting each part > accim + cp = accimcp
		acmicp + c : after sorting each part > accimp + c = accimpc
	*/
        string s,x,a,b,c;
        cin>>s;
        a = s;
        c = s;
         for(int i=0;i<s.length()-1;i++) // acmicpc
         {
	        x+=s[i];  // "a"
	        a.erase(0,1); //"cmicpc" 
	        b=a; // b = "cmicpc"
	        sort(x.begin(),x.end());
	        sort(b.begin(),b.end());
	        c=min(c,x+b);
         }
        
         cout<<c<<endl;
    return 0;
}
