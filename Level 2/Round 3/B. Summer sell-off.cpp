#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   long long dayes,size;
   cin>>dayes>>size;
   long long arr[dayes];   
   long long sum =0;
   for(int i=0;i<dayes;i++){
   		long long product,clients;
   		cin>>product>>clients;
   		sum+= min(product,clients);
   		if(clients > product){
   			arr[i] = min(2*product,clients) - min(product,clients);
		} else {
			arr[i] = 0;
		}
   }
   sort(arr,arr+dayes,greater<long long>());
   int c =0;
   while(size && c<dayes){
   		if(arr[c] != 0){
   			sum+= arr[c];
   			size--;
		}
		
		c++;
   }
   cout<<sum<<endl;
}
