#include "bits/stdc++.h"

#define fr(i, n) for (int i = 0; i < (n); i++)

using namespace std;

void solve()
{
  int n;
  cin >> n;

  int total = n * (n - 1) / 2;

  map<int, int> mp;
  int val = 0;
  fr(i, total)
  {
    cin >> val;
    mp[val]++;
  }

  for (int i = 0; i < n; i++)
  {
    if (!mp.empty())
    {
      cout << mp.begin()->first << " ";
      mp.begin()->second -= n - i - 1;

      if (mp.begin()->second == 0)
        mp.erase(mp.begin());
    }
    else
    {
      cout << 1000000000 << " ";
    }
  }

  cout << endl;
}

int32_t main()
{

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int T = 1;
  cin >> T;
  while (T--)
  {
    solve();
  }
  return 0;
}
