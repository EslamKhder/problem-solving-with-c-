#include<bits/stdc++.h>
using namespace std;
int main()
{
	// "dsc"    ['d','s','c']
	string value1,value2;
	cin>>value1>>value2;
	int size1 = value1.size();
	int size2 = value2.size();
	int size = min(size1,size2);
	/*
			acp
			acmc
	*/
	int flag = 0;
	for(int i=0;i<size;i++){
		if(value1[i] < value2[i]){
			cout<<value1<<endl;
			flag = 0;
			break;
		} else if (value2[i] < value1[i]){
			cout<<value2<<endl;
			flag = 0;
			break;
		} else {
			flag = -1;
		}
	}
	if(flag == -1){
		// sss  ss
		// sss  ssss
		if(size1 > size2){
			cout<<value2<<endl;
		} else {
			cout<<value1<<endl;
		}
	}
}
