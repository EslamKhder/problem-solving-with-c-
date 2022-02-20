#include <iostream>
using namespace std;
#include<vector>
int main()
{
    int n, b, m;
    cin>>n>>m;
    vector<char>V_marks;
    vector<char>V_max;
    for (int i=0;i<n*m;i++)
    {
        char c; cin>>c;
        V_marks.push_back(c);
    }
  
  
    for (int a=0;a<m;a++)
    {
        char Max =V_marks[a];
      for(b=a+m;b<n*m;b++)
        {
            if(Max<V_marks[b]&&(b-a)%m==0)
             {
                 Max=V_marks[b]; 
             }       
        }
        V_max.push_back(Max);
    }
    
    
   int Ans=0;
  for(int j=0 ;j<n; j++){
   int z=0;
   for(int i=j*m ; i<(j+1)*m  ;  i++)
   {
       if(V_marks[i]==V_max[z])
       {
           Ans++;
           break;
       }
       z++;
   }
  }
  cout<<Ans;
}
