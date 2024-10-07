#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t){
        int n,m,k;
        cin >> n >> m >> k;

        if(m == 1) cout << "NO" << endl;
        else if(m == 2)
        {
            int val = n / m;
            int mini = min(n - val,val);
             if(mini > k) cout << "YES" << endl; 
             else cout << "NO" << endl;
        }

        else{
            int val = n / m;
            if(n % m) val++;
             if(n-val> k) cout << "YES" << endl;
              else cout << "NO" << endl;
        }
        

      t--;
    }
}