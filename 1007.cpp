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

void solve()
{
    int n;
    cin >> n;

    int val = 0;

    int last = -1;
    int count = 0;
    unordered_map<int, int> mp1;
    unordered_map<int, int> mp2;
    int maxi = 0;

    fr(i, n)
    {
        cin >> val;
        if (last == -1)
        {
            last = val;
            count++;
        }
        else
        {
            if (val == last)
                count++;

            else
            {
                if (count > mp1[last])
                    mp1[last] = count;

                last = val;
                count = 1;
            }
        }
    }

    if (count > mp1[val]) mp1[val] = count;
    count = 0;
    last = -1;

    fr(i, n)
    {
        cin >> val;
        if (last == -1)
        {
            last = val;
            count++;
        }
        else
        {
            if (val == last)
                count++;

            else
            {
                if (count > mp2[last]) mp2[last] = count;

                count = 1;
                last = val;
            }
        }
    }
    if (count > mp2[val]) mp2[val] = count;

    for (auto it : mp1)
    {
        maxi = max(maxi, it.second + mp2[it.first]);
    }

    for (auto it : mp2)
    {
        maxi = max(maxi, it.second + mp1[it.first]);
    }

    cout << maxi << endl;
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
