 #include<iostream>
using namespace std ;
int main ()
{
        int size,mo = 0;
        cin>>size;
        int arr[size];
        for(int i=0;i<size;i++){
        	cin>>arr[i];
		}
		
		/*
			5
			0 1 2 3 4
			2 1 3 5 4
			
			? ? 
			1 2 3 4 5
		*/
		for(int i=0,l =0;i<size;i++){ // i = 1 l = 2
			l = max(l,arr[i]);// l = 2
			if(i + 1 == l){ // 1+1 = 2 == l(2)
				mo++;
			}
		}
		
		cout<<mo<<endl;
		
		
		
    
}
