#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t){
        int n;
        cin >> n;
        int sum = 0;
        while(n)
        {
            int val;
            cin >> val;
            sum += val;
            n--;
        }

        if(sum & 1) cout << "NO" << endl;
        else cout << "YES" << endl;
      t--;
    }
}