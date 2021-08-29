#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long eye,mouth,body;
	cin>>eye>>mouth>>body;
	long long res=0;
	if(eye == 0 || body == 0){
		cout<<0;
	} else {
		if((mouth >= eye && mouth >= body) || (mouth >= body && mouth <eye)
		    || (mouth < body && mouth >= eye)){
			res = min (eye,body);
			cout<<res<<endl;
		} else if(mouth < body && mouth <eye ){
			res = mouth;
			eye -= mouth;
			body -= mouth;
			res += min(eye/2,body);
			cout<<res;
		}
	}
	
}
