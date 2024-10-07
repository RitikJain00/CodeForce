#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n){
        int num;
        cin >> num;
        unordered_map<int,int> mp;
        
        while(num)
        {
            int val;
            cin >> val;

            mp[val]++;
            num--;
           
        }

        if(mp.size() > 2) cout << "No" << endl;

        else if(mp.size() == 1) cout << "Yes" << endl;

        else
        {
            int f1 = mp.begin() -> second;  // to get the value of frequency    --------------> mp.begin gives iterator
            int f2 = (++mp.begin())-> second;

            if(abs(f1-f2) <= 1) cout << "Yes" << endl;
            else cout << "No" << endl;;
        }

        n--;
    }
}