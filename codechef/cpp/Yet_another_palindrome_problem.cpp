// https://www.codechef.com/START60C/problems/ARRPAL


#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
#define pb push_back
using namespace std;



int main()
{
	
ll t;
cin>>t;
while(t--){
	
	ll  n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	if(n%2==0){
		ll i= n/2-1;
		ll j= n/2;

		//  i-- and j++
		ll temp =0;
		ll cnt =0;
		// vector<int> v;
		bool flag = 1;
		ll sum =0;
		while(i!= 0 && j != n){
			if(a[i] + cnt   > a[j]){
				flag = false;
				break;
			}
			else if(a[i] +cnt  == a[j]){
				i--;
				j++;
			}
			else if(a[i] + cnt < a[j] ){
				sum += cnt;
				cnt = a[j]- a[i]- sum ;
				temp += cnt;
				// cout<<"cnt each step "<<cnt<<endl;


				
				i--;
				j++;
			}
		}
		// cout<<cnt<<endl;
		if(flag){
			ll x = a[n-1]- a[0] - temp;

		cout<<temp+x<<endl;
		}
		else{
			cout<<-1<<endl;
		}
		
		

	}

	else{

		ll  i = n/2 -1;
		ll j= n/2 +1;

		ll temp =0;
		ll cnt =0;
		// vector<int> v;
		bool flag = 1;
		ll sum =0;
		while(i!= 0 && j != n){
			if(a[i] + cnt   > a[j]){
				flag = false;
				break;
			}
			else if(a[i] +cnt  == a[j]){
				i--;
				j++;
			}
			else if(a[i] + cnt < a[j] ){
				sum += cnt;
				cnt = a[j]- a[i]- sum ;
				temp += cnt;
		


				
				i--;
				j++;
			}
		}
		
		if(flag){
			ll x = a[n-1]- a[0] - temp;

		cout<<temp+x<<endl;
		}
		else{
			cout<<-1<<endl;
		}







	}





// Time complexity -> O(n)
// Space complexity -> O(n)









	

}

	return 0;
}
