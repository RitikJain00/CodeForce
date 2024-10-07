#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t){
        long long n,k;
        cin >> n >> k;

        int arr[n];

       for(int i = 0 ; i < n ; i++)
       {
            cin >> arr[i];
       }

       if(k % 2 == 0)
        {
            int Lsum = 0;
            int Rsum = 0;

            int i = 0 ; int j = n-1;

            while(Lsum + Rsum <= k)
            {
                Lsum += arr[i];
                i++;

                (Lsum + Rsum > k) break;

                if(Rsum + arr[j] < )
            }

        }
        else{

        }

        // deque<int> dq;

        // while(n)
        // {
        //     int val;
        //     cin >> val;
        //     dq.push_back(val);
        //     n--;
        // }

        // long long size = dq.size();

        // bool flag = true;

        // while(k)
        // {
        //     if(flag)
        //     {
        //         dq.front()--;
        //         if(dq.front() == 0)
        //         {
        //             dq.pop_front();
        //         }
        //         flag = false;
        //     }

        //     else{
        //          dq.back()--;
        //         if(dq.back() == 0)
        //         {
        //             dq.pop_back();
        //         }
        //         flag = true;
        //     }

        //     if(dq.size() == 0) break;

        //     k--;
        // }

        // cout << size - dq.size() << endl;

        
      t--;
    }
}