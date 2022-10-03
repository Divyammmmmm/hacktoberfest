// https://www.codechef.com/submit/ZCOSCH
#include <bits/stdc++.h>
using namespace std;

int main() {
	int rank;
	cin >> rank;
	if ((rank<=50) && (rank>=1)) cout << 100 << "\n";
	else if ((rank<=100) && (rank>=51)) cout << 50 << "\n";
	else cout << 0 << "\n";
	return 0;
}
