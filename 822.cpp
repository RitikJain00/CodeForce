#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t){
        long long n,k;
        cin >> n >> k;

        if(n & 1 )
        {
           if(k & 1) cout << "YES" << endl;
           else cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
      t--;
    }
}