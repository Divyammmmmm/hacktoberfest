// https://www.codechef.com/submit/ELECTIONS
#include <bits/stdc++.h>
using namespace std;
int main() {
	int ts,a,b,c;

	cin >> ts; 
	while (ts--){
	    cin>>a>>b>>c;

	    if (a>b && a>c && a > 50) 
	    	cout << "A" << "\n";
	    else if (b>a && b>c && b > 50) 
	    	cout << "B" << "\n";
	    else if (c>b && c>a && c > 50) 
	    	cout << "C" << "\n";
	    else 
	    	cout << "NOTA" << "\n";
	}
	return 0; 
}