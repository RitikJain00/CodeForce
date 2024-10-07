#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;                                       // very important keen observation required
    cin >> n;                                   //  only we can displace elements from 1 to n-1
    while(n){                                   // so if 0th element is not 1 it cannot be possible to sort

        int num;
        cin >> num;
        vector<int> store(num);
        for(int i = 0 ; i < num ; i++)
        {
            cin >> store[i];
        }

       if(store[0] == 1) cout << "YES" <<endl;
       else cout << "NO" << endl;
      n--;
    }
}