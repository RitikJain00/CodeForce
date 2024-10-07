#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t){
        int n;
        cin >> n;

        int pos = 0;
        int neg = 0;

        while(n)
        {
            int val ;
            cin >> val;

            if(val == 1) pos++;
            else neg++;
            n--;
        }

        int ans = 0;

        while(neg > pos)
        {
            neg--;
            pos++;
            ans++;
        }

        if(neg & 1) ans++;

        cout << ans << endl;
      t--;
    }
}