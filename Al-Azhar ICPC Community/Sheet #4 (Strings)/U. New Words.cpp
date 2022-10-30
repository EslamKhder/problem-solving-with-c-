#include<bits/stdc++.h>
using namespace std;
int main()
{
	string value; // "abc"    ['a','b','c']
	cin>>value;   // EgYpTaz
	int size = value.size();
	int e=0,g=0,y=0,p=0,t=0;
	for(int i=0;i<size;i++){
		if(value[i] == 'e' || value[i] == 'E'){
			e++;
		} else if(value[i] == 'g' || value[i] == 'G'){
			g++;
		}else if(value[i] == 'y' || value[i] == 'Y'){
			y++;
		}else if(value[i] == 'p' || value[i] == 'P'){
			p++;
		}else if(value[i] == 't' || value[i] == 'T'){
			t++;
		}
	}
	/*
					5 6 7 8 9
					 5   7   9
					   5    9
					      5
	*/
	int min1 = min(e,g);   // e g  ==> min1 
	int min2 = min(y,p);   // y p  ==> min2
	int min3 = min(min1,min2);
	cout<<min(min3,t);
	
}
