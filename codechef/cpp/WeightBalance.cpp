// https://www.codechef.com/submit/WEIGHTBL
#include <bits/stdc++.h>
using namespace std;

int main() {
	int w1, w2, x1, x2, m, i, s_w1, s_w2, ts;

	cin >> ts;

	while (ts--) {
	    cin >> w1 >> w2 >> x1 >> x2 >> m;

	    s_w1 = w1;
        s_w2 = w1;

        for (i = 0; i < m; i++){
            s_w1+=x1;
            s_w2+=x2;
        }

        if (s_w1 <= w2 && w2 <= s_w2) 
        	cout << 1 << "\n";
        else 
        	cout << 0 << "\n";
	}

	return 0; 
}