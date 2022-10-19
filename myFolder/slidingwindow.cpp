#include <bits/stdc++.h>
using namespace std;

int maxi(int a[],int n,int k){
if(n<k){
    cout<<"wrong";
    return -1;
}
int maxs=0;
for (int i = 0; i < k; i++)
{
    maxs=maxs+a[i];
    /* code */
}
 int wsum=maxs;
 for (int i = 0; i < n; i++)
 {
    wsum += a[i]-a[i-k];
    maxs= max(maxs,wsum);
    /* code */
 }
 
return maxs;

}

int main() {
    int n,k;
    cin>>n>>k;
int  a[n];
for (int i = 0; i < n; i++)
{
    cin>>a[i];
    /* code */
}
cout<<maxi(a,n,k);


	return 0;

}
