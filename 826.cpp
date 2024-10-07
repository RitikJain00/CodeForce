#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t){              // GCD
        int n;              // find a pair whose GCD is <=2
        cin >> n;           // GCD can not be Increase only it can decrease while adding numbers
        
        vector<int> arr(n);
        
        for(int i = 0 ; i < n ; i++)
        {
             cin >> arr[i];
        }
           
        bool flag = true;

        for(int i = 0 ; i < n ; i++)
        {
            for(int j = i+1 ; j < n ; j++)
            {
                if(__gcd(arr[i],arr[j]) <= 2)
                {
                    cout << "Yes" << endl;
                    flag = false;
                    break;
                }
            }

            if(flag == false) break;
        }

        if(flag) cout << "No" << endl;

      t--;
    }
}