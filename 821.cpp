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

        for(int& it : arr)
        {
            cin >> it;
        }

        int i = 0;
        int ans = 0;

        while(i < n)
        {
            int j = i;
            while(j < n && arr[j] == 0)
            {
                j++;
            }

            ans = max(ans,j-i);

            if(i == j) i++;
            else i = j;
        }

        cout << ans << endl;
      t--;
    }
}