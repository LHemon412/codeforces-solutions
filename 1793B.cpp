/* 1793B
 *
 * https://codeforces.com/contest/1793/problem/B
 *
 * Tutorial: https://codeforces.com/blog/entry/112723
 *
 */

#include <bits/stdc++.h>

using namespace std;

#define pii pair<int, int>
#define ll long long
#define forn(x, n) for (int x = 0; x < n; x++)

int main() {
  int t;
  cin >> t;
  while (t--) {
    int x, y;
    cin >> x >> y;
    cout << 2 * (x - y) << endl;
    ;
    for (int i = y; i <= x; i++) {
      cout << i << " ";
    }
    for (int i = x - 1; i > y; i--) {
      cout << i << " ";
    }
    cout << endl;
  }
}