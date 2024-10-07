#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;             // Passed
    cin >> t;
    while(t){
        int x,k;
        cin >> x >> k;

        if(x % k != 0)  // if it is not divisible by k  then direct jump
        {
            cout << 1 << endl;
            cout << x << endl;
        }

        else   // if it is divisible by k then return x-1 and 1 because it will not divisible by k
        {
            cout << 2 << endl;
            cout << x-1 << " " << 1 << endl;
        }

      t--;
    }
}