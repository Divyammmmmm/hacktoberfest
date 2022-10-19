#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
        int x,y;
        cin>>x>>y;
        int k=0;
        for(int i=1;i<ceil(sqrt(y))+1;i++)
        {
         if(y%i==0)
         {
          int a=min(i,y/i);
          int b=max(i,y/i);
          int c=a-1;
          int d=x-c;
          if(d<=c){
            if(d<0){
                c=x;
                d=0;
            }
            cout<<a<<" "<<b<<" "<<endl;
            cout<<min(c,d)<<" "<<max(c,d)<<" "<<endl;
            k=1;
            break;

          }
          c=b+1;
          d=x-c;
          if(d>b){
            cout<<a<<" "<<b<<" "<<endl;
            cout<<min(c,d)<<" "<<max(c,d)<<" "<<endl;
               k=1;
            break;
          }
          if(k==1)
            break;
          


         }
         if(k==1)
         break;


        }
        if(k==0){
            cout<<"-1"<<endl;
        }
	

	        
	    }
	    
	return 0;

}
