#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t){
        int n ,a ,b;
        cin >> n >> a >> b;

        if(a*2 < b)
        {
            cout << n*a << endl;
        }
        else{
            if(n % 2 == 0)
            {
               
                cout << ((n/2) * b) << endl;
            }
            else{
               
                cout << (((n-1)/2) * b) + a << endl;
            }
        }
      t--;
    }
}