 
long long sum(long long arr[]){ 
	// 5 3
	// 0 1 2 3  4
	// 1 8 2 10 3
	if(counter == lastnum){
		return 0;
	}
	// 3 + 10 + 2
	counter++;
	return arr[--size] + sum(arr); // 4 3 2
}
int main()
{
	cin>>size;
	cin>>lastnum;
	long long arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	cout<<sum(arr);
}
