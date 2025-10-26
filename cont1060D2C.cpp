#include "bits/stdc++.h"
#define int long long
#define uint unsigned long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vvb vector<vb>
#define fr(i, n) for (int i = 0; i < (n); i++)
#define rep(i, a, n) for (int i = (a); i <= (n); i++)
#define nl cout << "\n"
#define dbg(var) cout << #var << "=" << var << " "
#define all(v) v.begin(), v.end()
#define sz(v) (int)(v.size())
#define srt(v) sort(v.begin(), v.end())         // sort
#define mxe(v) *max_element(v.begin(), v.end()) // find max element in vector
#define mne(v) *min_element(v.begin(), v.end()) // find min element in vector
#define unq(v) v.resize(distance(v.begin(), unique(v.begin(), v.end())));
// make sure to sort before applying unique // else only consecutive duplicates would be removed
#define bin(x, y) bitset<y>(x)
using namespace std;
int MOD = 1e9 + 7; // Hardcoded, directly change from here for functions!

void modadd(int &a, int b) { a = ((a % MOD) + (b % MOD)) % MOD; }
void modsub(int &a, int b) { a = ((a % MOD) - (b % MOD) + MOD) % MOD; }
void modmul(int &a, int b) { a = ((a % MOD) * (b % MOD)) % MOD; }
// ================================== take ip/op like vector,pairs directly!==================================
template <typename typC, typename typD>
istream &operator>>(istream &cin, pair<typC, typD> &a) { return cin >> a.first >> a.second; }
template <typename typC>
istream &operator>>(istream &cin, vector<typC> &a)
{
  for (auto &x : a)
    cin >> x;
  return cin;
}
template <typename typC, typename typD>
ostream &operator<<(ostream &cout, const pair<typC, typD> &a) { return cout << a.first << ' ' << a.second; }
template <typename typC, typename typD>
ostream &operator<<(ostream &cout, const vector<pair<typC, typD>> &a)
{
  for (auto &x : a)
    cout << x << '\n';
  return cout;
}
template <typename typC>
ostream &operator<<(ostream &cout, const vector<typC> &a)
{
  int n = a.size();
  if (!n)
    return cout;
  cout << a[0];
  for (int i = 1; i < n; i++)
    cout << ' ' << a[i];
  return cout;
}
// ===================================END Of the input module ==========================================

vi primeData(1e6, 1);

void find()
{

  for (int i = 2; i < 1e6; i++)
  {
    if (primeData[i] == 1)
    {
      for (int j = i * 2; j < 1e6; j += i)
      {
        primeData[j] = 0;
      }
    }
  }
}

bool check1(vi &prime, vi &nonprime)
{

  fr(i, prime.size())
  {
    fr(j, nonprime.size())
    {
      if ((nonprime[j] % prime[i]) == 0)
        return true;
    }
  }

  return false;
}

bool check2(vi &prime)
{

  fr(i, prime.size())
  {
    for (int j = i + 1; j < prime.size(); j++)
    {
      if (prime[i] == 1 || prime[j] == 1)
        continue;
      if (((prime[j] + 1) % prime[i]) == 0)
        return true;
    }
  }

  return false;
}

void solve()
{
  int n;
  cin >> n;
  int val = 0;

  vi prime;
  vi nonprime;
  int even = 0;
  int odd = 0;

  fr(i, n)
  {
    cin >> val;
    if (primeData[val] == 1)
      prime.push_back(val);
    else
      nonprime.push_back(val);

    if (val % 2)
      odd++;
    else
      even++;
  }

  srt(prime);

  fr(i, n) cin >> val;

  if (nonprime.size() >= 2 || even >= 2 || check1(prime, nonprime))
    cout << 0 << endl;
  else if (prime.size() > 0 && nonprime.size() > 0 || (even > 0 && odd > 0) || check2(prime))
    cout << 1 << endl;
  else
    cout << 2 << endl;
}

int32_t main()
{

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int T = 1;
  cin >> T;

  find();
  while (T--)
  {
    solve();
  }
  return 0;
}
