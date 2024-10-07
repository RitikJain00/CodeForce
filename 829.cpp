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
        int ans = 0;

        for(int& it : arr)  // input
        {
            cin >> it;
        }

        int j = 0;

        while(j < n)
        {
            int count = 0;
            if(arr[j] & 1)  // odd
            {
                while(j < n && (arr[j] & 1))
                {
                    count++;
                    j++;
                }
            }
            else
            {
                  while(j < n && (arr[j] & 1) == 0)
                {
                    count++;
                    j++;
                }
            }

            ans += count-1;
        }

        cout << ans << endl;
      t--;
    }
}