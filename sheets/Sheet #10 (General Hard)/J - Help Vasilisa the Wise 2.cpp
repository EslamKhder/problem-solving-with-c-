#include <bits/stdc++.h>
using namespace std;
int main()
{
	int r1,r2,c1,c2,d1,d2;
	cin>>r1>>r2>>c1>>c2>>d1>>d2;
	for(int a=1;a<=9;a++){ // 1
		for(int b=1;b<=9;b++){ // 2
			for(int c=1;c<=9;c++){ // 3
				for(int d=1;d<=9;d++){ // 4
					if(a != b && a != c && a != d && b != c && b !=d && c != d){
						if(a+b == r1 && a+d == d1 && c+d == r2 &&
						   a+c == c1 && b+d == c2 && b+c == d2){
							cout<<a<<" "<<b<<endl;
							cout<<c<<" "<<d<<endl;
							return 0;
						}
					}
				}
			}
		}
	}
	cout<<-1<<endl;
}

