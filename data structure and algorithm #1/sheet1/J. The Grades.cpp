#include<bits/stdc++.h>
using namespace std;
struct Student {
	string name;
	long long g1,g2,g3,g4,sum;
};
bool studentDifference(Student s1,Student s2){
	if(s1.sum == s2.sum){
		return s1.name < s2.name;
	}
	return s1.sum > s2.sum;
}
int main(){
	long long size;//7
	cin>>size;
	Student st[size];//7    int st[7];
	for(int i=0;i<size;i++){
		cin>>st[i].name>>st[i].g1>>st[i].g2>>st[i].g3>>st[i].g4;
		st[i].sum = st[i].g1+st[i].g2+st[i].g3+st[i].g4;
	}
	sort(st,st+size,studentDifference);
	for(int i=0;i<size;i++){
		cout<<st[i].name<<" "<<st[i].sum<<" "<<st[i].g1<<" "<<st[i].g2<<" "<<st[i].g3<<" "<<st[i].g4<<endl;
	}
}
 
