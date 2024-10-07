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


int maxElement(int& i , unordered_map<int, int>& mp,vi& v)
{
    int maxi = 0;
    while(mp[v[i]] != 1)
        {
            maxi = max(maxi , v[i]);
            mp[v[i]]--;
            i++;
        }

        return maxi;
}

int minElement(int& i , unordered_map<int, int>& mp,vi& v)
{
    int mini = INT_MAX;
    while(mp[v[i]] != 1)
        {
            mini = min(mini , v[i]);
            mp[v[i]]--;
            i++;
        }

        return mini;
}
{

}
void solve()
{
    int n;
    cin >> n;
    vi v(n);
    unordered_map<int, int> mp;
    fr(i, n)
    {
        cin >> v[i];
        mp[v[i]]++;
    }

    vi ans;
    int i = 0;

    while(i < n)
    {

        if(ans.size() % 2 == 0)
        {
             int maxi = maxElement(i,mp,v);
             if(maxi == 0)
             {
                ans.push_vack(v[i]);
                mp[v[i]] = 0;
                i++;
             }
             else
             {
              if(maxi > v[i])
              {
                ans.push_back(maxi);
                mp[maxi] = 0;
                 ans.push_vack(v[i]);
                  mp[v[i]] = 0;
                  i++;  
              }
              else{
                if(v[i] >= maxi && mp[maxi] > 0)
                {
                    ans.push_back(v[i]);
                    m[v[i]]--;
                }
                else{
                     ans.push_back(v[i]);
                    m[v[i]]--;
                    ans.push_back(maxi)
                }
              }
             }

        }

        else{

        }
       
        

       
    }

    // fr(i, n)
    // {
    //     if (ans.size() != 0)
    //     {

    //         if ((ans.size()) % 2 != 0) // odd
    //         {
    //             if (v[i] > ans.back() && mp[ans.back()] > 0)
    //             {
    //                 ans.pop_back();
    //             }
    //         }
    //         else
    //         {
    //             if (v[i] < ans.back() && mp[ans.back()] > 0)
    //             {
    //                 ans.pop_back();
    //             }
    //         }
    //     }

    //     if (ans.size() != 0)
    //         mp[ans.back()] = 0;

    //     if (mp[v[i]] > 0)
    //     {
    //         ans.push_back(v[i]);
    //         mp[v[i]]--;
    //     }
    // }

    cout << ans.size() << endl;

    fr(i, ans.size())
    {
        cout << ans[i] << " ";
    }

    nl;
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
