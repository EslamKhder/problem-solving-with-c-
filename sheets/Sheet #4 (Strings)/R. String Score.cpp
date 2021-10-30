#include<bits/stdc++.h>
using namespace std;
int main()
{
		int size;
		cin>>size;
		string value; // "VWY"   ['Z','Y','0','Y','Z']
		cin>>value;
		int score = 0;
		for(int i=0;i<value.size();i++){ // i = 0
			char c = value[i]; // Z
			switch(c){
				case 'V':
					score += 5;
					break;
				case 'W': 
				    score += 2;
				    break;
				case 'Z': 
				if(i != value.size() - 1){
					if(value[i + 1] == 'W'){
				    	score /= 2;
				    	value[i+1] = '0'; // 48
					} else if (value[i + 1] == 'V'){
						score /= 5;
						value[i+1] = '0'; // 48
					}
				}
					break;
				case 'Y':
					if(i != value.size() - 1){
					value.push_back(value[i+1]);
					value[i+1] = '0';
					
					}
					break;
				case 'X':
					if(i != value.size() - 1){
					value[i+1] = '0';
				}
					
			}
		}
		cout<<score;
}
