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


        for(int& it: arr)
        {
            cin >> it;
        }
       
        int val = arr[0];
        int count = INT_MAX;
        
        int i = 0;
        int j = 0;

        while(j < n)
        {
            if(arr[j] == val)
            {
                j++;
            }
            else
            {
                count = min(count,j-i);
                j++;
                i = j;   
            }
        }

     count = min(count,j-i);

        if(i == 0) cout << -1 << endl;
        else cout << count << endl;

        
      t--;
    }
}