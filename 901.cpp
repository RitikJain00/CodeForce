#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t){
        int a,b,xk,yk,xq,yq;
        cin >> a >> b >> xk >> yk>> xq >> yq;

        set<pair<int,int>> s1 ,s2;

        vector<pair<int,int>> v  = {{a,b},{a,-b},{-a,b},{-a,-b},{b,a},{b,-a},{-b,a},{-b,-a}} ;

        for(int i = 0 ; i < 8 ; i++)
        {
            s1.insert({xk + v[i].first,yk + v[i].second});
        }

        for(int i = 0 ; i < 8 ; i++)
        {
            s2.insert({xq + v[i].first,yq + v[i].second});
        }

        int ans = 0;

        for(auto it: s1)
        {
            if(s2.count(it)) ans++;
        }

        cout << ans << endl;
      t--;
    }
}