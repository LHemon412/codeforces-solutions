/* 1793C
 *
 * https://codeforces.com/contest/1793/problem/C
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
    int n;
    cin >> n;
    vector<int> a(n);
    forn(i, n) cin >> a[i];
    int l = 0, r = n - 1;
    int min = 1, max = n;
    while (l < r) {
      if (a[l] == min) {
        l++;
        min++;
      } else if (a[l] == max) {
        l++;
        max--;
      } else if (a[r] == min) {
        r--;
        min++;
      } else if (a[r] == max) {
        r--;
        max--;
      } else {
        break;
      }
    }
    if (l == r)
      cout << -1 << endl;
    else
      cout << l + 1 << " " << r + 1 << endl;
  }
}