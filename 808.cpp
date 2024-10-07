#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t){
        int n,k;
        cin >> n >> k;
        bool flag = false;

        while(n)
        {
            int val;
            cin >> val;
            if(val == k)
            {
                flag = true;
            }
            n--;
        }

        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
      t--;
    }
}