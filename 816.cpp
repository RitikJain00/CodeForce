#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t){
        int n;
        cin >> n;
        vector<int> arr(n);

        for(int& it: arr)
        {
            cin >> it;
        }

        int diff = INT_MAX;
        bool flag = true;

        for(int i = 1 ; i < n ; i++)
        {
            if(arr[i] < arr[i-1])
            {
                flag = false;
            }
            else{
                diff = min(diff,arr[i] - arr[i-1]);
            }
        }

        if(flag) cout << diff / 2 + 1 << endl;
        else cout << 0 << endl;
      t--;
    }
}