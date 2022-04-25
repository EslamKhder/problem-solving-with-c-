#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main () {
    
    double L,S1,S2,numQ; // 4 5    5 4
    cin>>L>>S1>>S2>>numQ;
    for(int i=0;i<numQ;i++){ // 50  100
		double q;
		cin>>q;
		double time = sqrt(2) * (L - sqrt(q)) / (S2 - S1);
		cout<<fixed<<setprecision(6)<<abs(time)<<endl;
	}
}
