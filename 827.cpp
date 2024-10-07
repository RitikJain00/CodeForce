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
        int count = 0;

        for(int i = 0 ; i < n ; i++)
        {
            cin >> arr[i];
            if(arr[i] == 2) count++; 
        }

        if(count & 1)
        {
            cout << -1 << endl;
        }
        else{
            int j = 0;
            int leftCount = 0;
            int rightCount = count;
            while(j < n && leftCount != rightCount )
            {
                if(arr[j] == 2)
                {
                   leftCount++;
                    rightCount--;
                }

                if(leftCount == rightCount) break;
                j++;
            }

            cout << j+1 << endl;
        }
      t--;
    }
}