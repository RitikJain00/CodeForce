#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t){
        int n;
        cin >> n;

        int xor_sum = 0;

        int rounds = n;
        while(rounds)
        {
            int val ;
            cin >> val;
            xor_sum = (xor_sum ^ val);
          
            rounds--;
        }


        if(n & 1)
        {
            cout << xor_sum << endl;
        }
        else
        {
            if(xor_sum == 0)
            {
                cout << 0 << endl;
            }

            else{
                cout << -1 << endl;
            }
        }
      t--;
    }
}