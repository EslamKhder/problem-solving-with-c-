#include<iostream> 
using namespace std; 
int main() {
	int start,end;
	cin>>start>>end;
	int counter = 0;
	for(int i=0;i<=start;i++){
		for(int z=0;z<=start;z++){
			if(end-i-z>=0 && end-i-z <= start){
				counter++;
			}
		}
	}
	cout<<counter<<endl;
}
