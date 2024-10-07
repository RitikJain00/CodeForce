#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t){
        int n,c,d;
        cin >> n >> c >> d;

        vector<int> arr(n*n);
        
        for(int& it: arr)
        {
            cin >> it;
        }

        sort(arr.begin(),arr.end());
        int minVal = arr[0];

        vector<int> ans(n*n);

        for(int i = 0 ; i < n*n ; i++)
        {
            ans[i] = minVal + c*(i/n) + d*(i % n);
        }

        sort(ans.begin(),ans.end());
        
        if(arr == ans) cout << "YES" << endl;
        else cout << "NO" << endl;

      t--;
    }
}