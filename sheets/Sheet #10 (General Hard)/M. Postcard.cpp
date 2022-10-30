 #include<iostream>
using namespace std;

int main() {
    int size,c=0,l=0,j=0,t=0;
    string password; // a-z   ? *
    cin>>password>>size; // 12
    
    for(int i=0;i<password.size();i++){
    	if(password[i] != '?' && password[i] != '*') c++; //13
		else l++; //  * ?      5
		if(password[i] == '*') j++;  //  3
	}
	/*
		01234
		a*cg?     c=3   l=2   j = 1
		10
		
		a?cg?     c=3   l=2   j = 0
		10

	*/
	if(c - size == 0){ // 12 - 12 == 0
		for(int i=0;i<password.size();i++){
			if(password[i] != '?' && password[i] != '*')
				cout<<password[i];
		}
	} else if (c > size){
		if(l >= c -size){
			for(int i=0;i<password.size();i++){
				if(password[i] >= 'a' && password[i] <= 'z' 
					&& (password[i+1] =='*' || password[i+1] == '?')){
					password[i] = '&';
					t++;
				}
				if(t == c-size) break;
			}
			for(int i=0;i<password.size();i++){
				if(password[i] >= 'a' && password[i] <= 'z')
				cout<<password[i];
			}
			
		} else {
			cout<<"Impossible";
		}
	} else if(c < size){
		if(j == 0){
			cout<<"Impossible";
		} else {
			int ind;
			for(int i=0;i<password.size();i++){
				if(password[i] == '*'){
					ind = i;
					break;
				}
			}
			for(int i=0;i<password.size();i++){//  a*cg?     10    7
				if(password[i] >= 'a' && password[i] <= 'z') cout<<password[i];
				if(i == ind){
					for(int z=0;z<size - c;z++) cout<<password[i - 1];
				}
			}
			
		}
	}
}
