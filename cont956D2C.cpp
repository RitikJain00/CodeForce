#include "bits/stdc++.h"
#define int long long
#define uint unsigned long long
#define vi vector<int>
#define vvi vector<vi >
#define vb vector<bool>
#define vvb vector<vb >
#define fr(i,n) for(int i=0; i<(n); i++)
#define rep(i,a,n) for(int i=(a); i<=(n); i++)
#define nl cout<<"\n"
#define dbg(var) cout<<#var<<"="<<var<<" "
#define all(v) v.begin(),v.end()
#define sz(v) (int)(v.size())
#define srt(v)  sort(v.begin(),v.end())         // sort 
#define mxe(v)  *max_element(v.begin(),v.end())     // find max element in vector
#define mne(v)  *min_element(v.begin(),v.end())     // find min element in vector
#define unq(v)  v.resize(distance(v.begin(), unique(v.begin(), v.end())));
// make sure to sort before applying unique // else only consecutive duplicates would be removed 
#define bin(x,y)  bitset<y>(x) 
using namespace std;
int MOD=1e9+7;      // Hardcoded, directly change from here for functions!



void modadd(int &a , int b) {a=((a%MOD)+(b%MOD))%MOD;}
void modsub(int &a , int b) {a=((a%MOD)-(b%MOD)+MOD)%MOD;}
void modmul(int &a , int b) {a=((a%MOD)*(b%MOD))%MOD;}
// ================================== take ip/op like vector,pairs directly!==================================
template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout<<a.first<<' '<<a.second; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD>> &a) { for (auto &x:a) cout<<x<<'\n'; return cout; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }
// ===================================END Of the input module ==========================================


bool check(vi index,  int sum, vvi store, int n)
{

    vector<pair<int,pair<int,int>>> ans;
    int last = 0;
    int count = 0;
    fr(i,3)
    {
        int minSum = 0;
        for(int j = last; j < n ; j++)
        {
            minSum += store[index[i]][j];
            if(minSum >= sum)
            {
                ans.push_back({index[i],{last,j}});
                last = j+1;
                count++;
                break;
            }
        }
    }

    if(count == 3)
    {
        sort(ans.begin(),ans.end());

        fr(i,3)
        {
            cout << ans[i].second.first + 1 << " " << ans[i].second.second + 1 << " ";
        }
        nl;

        return true;
    }
    else{
        return false;
    }


}

void solve(){
    int n;
    cin>>n;

    vvi store(3 , vi(n,0));
    

    fr(i,3)
    {
       
        fr(j,n)
        {
            cin >> store[i][j];
        }
    }


    int sum = 0;

    fr(j,n)
        {
            sum += store[0][j];
        }

        sum = ceil(sum / 3.0); 

       

   

    if(check({0,1,2},sum,store,n)) return ;
    if(check({0,2,1},sum,store,n)) return ;

    if(check({1,2,0},sum,store,n)) return ;
    if(check({1,0,2},sum,store,n)) return ;

    if(check({2,1,0},sum,store,n)) return ;

    if(check({2,0,1},sum,store,n)) return ;

    cout << -1 << endl; 

    
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
