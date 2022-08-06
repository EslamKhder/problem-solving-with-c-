#include<bits/stdc++.h>
using namespace std;
int main() {
	string s1 = "qwertyuiopasdfghjkl;zxcvbnm,./",s2,s3;
	char LR;
	cin>>LR>>s2;
	/*
		R
		0123456.......
		s;;upimrrfod;pbr
	*/
	for(int i=0;i<s2.size();i++){
		int index = s1.find(s2[i]);
		if(LR == 'R'){
			s3+=s1[index - 1];
		} else {
			s3+=s1[index + 1];
		}
	}
	cout<<s3<<endl;
}
/// drgfd
//  dcfgv
