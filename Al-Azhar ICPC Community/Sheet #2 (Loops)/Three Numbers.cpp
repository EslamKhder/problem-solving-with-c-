#include<iostream> 
using namespace std; 
int main() {
int k,s; cin>>k>>s; 
int count =0; 
for(int x=0 ; x<=k ; x++){
 	for(int y=0; y<=k ; y++){
		if(s-x-y>=0 && s-x-y<=k)
		count ++ ; 
	}
}
    cout<<count;  
    return 0;
}
