#include<bits/stdc++.h>
using namespace std;
int main() //
{
	int size; // 3
	cin>>size;
	int pol = 0;
	int isu = 0;
	for(int i=1;i<=size;i++){ // 1 2 3
		int num;
		cin>>num;
		if(num == -1){
			if(pol > 0){
				pol--;
			} else {
				isu++;
			}
		} else {
			pol += num;
		}
	}
	cout<<isu<<endl;
}
