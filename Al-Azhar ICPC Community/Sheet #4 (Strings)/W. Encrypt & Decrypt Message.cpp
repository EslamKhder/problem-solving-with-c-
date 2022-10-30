#include<bits/stdc++.h>
using namespace std;
int main()
{
	string Key =      "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
	string Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int flag;
	cin>>flag;
	string value;
	cin>>value; 
	// 01234
	// "Egypt"   ['E','g','y','p','t']
	int size = value.size();
	int z=0;
	if(flag == 1){
		for(int i=0;i<size;i++){
			for(z=0;z<Original.size();z++){
				if(value[i] == Original[z]){ //  E == E
					break;
				}
			}
			cout<<Key[z];
		}
	} else {
		for(int i=0;i<size;i++){
		for(z=0;z<Key.size();z++){
				if(value[i] == Key[z]){ //  E == E
					break;
				}
			}
			cout<<Original[z];
		}
	}
	
	
}
