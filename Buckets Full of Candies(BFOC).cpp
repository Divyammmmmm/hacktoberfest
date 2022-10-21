#include <iostream>
using namespace std;

int main() {
	 int t;

       cin >> t;

       while (t--)
       {
              long long int n, m, l;
              cin >> n;
              cin >> m;
              cin >> l;

              long long int res;
              res = (l + n - 1);

              while (m >= l && res >= l)
              {
                     long long int temp = (m % res);

                     if (temp == m && m >= l)
                     {
                            res = m;
                            m = temp;
                            continue;
                     }
                     else
                     {
                            m = temp;
                            res--;
                     }
              }
              cout << m << endl;
       }
	return 0;
}
