#include <bits/stdc++.h>
using namespace std;
long long arr[100005] = {0};
int main() {
  long long size,process; // 3
  cin>>size>>process;
  vector<long long> v;
  for(int i=0;i<size;i++){
  	long long num;
  	cin>>num;
  	v.push_back(num);
  }
  while(process--){ // 3 2 1
  	int start,end,add;
  	cin>>start>>end>>add;
  	arr[start - 1] += add;
  	arr[end] -= add;
  }
  for(int i=1;i<size;i++){//3
  	arr[i] += arr[i-1];
  }
  for(int i=0;i<size;i++){
  	cout<<v[i]+arr[i]<<" ";
  }
  
}
