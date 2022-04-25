#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size; // 3
    cin>>size;
    int max = size; //3 2
    int frq[size+1] = {0};
    for(int i=0;i<size;i++){
    	int num;  // 3 1 2
    	cin>>num;
    	frq[num] = 1; // frq[3] = 1   frq[1] = 1  frq[2] = 1  
    	while(frq[max]){// frq[3] frq[2] = 0    frq[2] = 1
    		cout<<max<<" ";
    		max--;// 0
		}
		cout<<endl;
	}
	/*
	3
	
	2 1
	*/
}
