#include<bits/stdc++.h>
using namespace std;
int main ()
{
	string value1,value2;
	cin>>value1>>value2;
	if(value1.size() != value2.size()){
		cout<<"NO";
		return 0;
	}
	int flag = 0;
	if(value1 == value2){
		sort(value1.begin(),value1.end());
		for(int i=0;i<value1.size()-1;i++){ // i<2 0 1
			if(value1[i] == value1[i+1]){ 
			//012 
			//abb
				flag=1;
				break;
			}
		}
		if(flag == 1){
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
	} else {
		int dif = 0;
		int index1,index2;
		int counter = 0;
		bool close = true;
		for(int i=0;i<value1.size();i++){ // abva  aavb
			if(value1[i] !=value2[i]){ // 0
				dif++;//1
				counter++; // 1
			}
			if(dif == 1 && close){
				index1 = i;
				close = false;
			}
			if(dif == 2){
				index2 = i;
				break;
			}
		}
		if(counter == 2){
			swap(value1[index1],value1[index2]);
			if(value1 == value2){
				cout<<"YES"<<endl;
			} else {
				cout<<"NO"<<endl;
			}
		} else {
			cout<<"NO"<<endl;
		}
	}
}
