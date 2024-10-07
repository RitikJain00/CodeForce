#include<bits/stdc++.h>
using namespace std;

vector<int> store;

void preCompute()
{
    for(int  i = 1 ; i < 10000000 ; i *= 10)   // precompute the possible numbers and store it in vector
    {
        for(int j = 1 ; j <= 9 ; j++)
        {
            store.push_back(i*j);
        }
    }
}
int main()
{
    int t;
    cin >> t;

    preCompute();
    
    while(t){
        int n;
        cin >> n;
        int ans = 0;

        for(int& it: store)   // simply count how many numbers are small
        {
            if(it <= n)
            {
                ans++;
            }
            else{
                break;
            }
        }

        cout << ans << endl;
      t--;
    }
}