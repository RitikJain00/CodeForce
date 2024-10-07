#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
                                // passed
    while(t){
        int n;
        cin >> n;
        vector<int> arr(n);
        int maxi = 0;

        for(int& it: arr)
        {
            cin >> it;
            maxi = max(maxi,it);   //find max element
        }

       
        maxi++;  //  increase by one

        for(int it : arr)
        {
           cout << maxi - it <<" ";    // this will make equal  a1+b1 == a2+b2 == a3+b3 == a4+b4
        }

        cout << endl;
        
      t--;
    }
}