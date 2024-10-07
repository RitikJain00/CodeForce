#include<bits/stdc++.h>
using namespace std;
int main()              // passed    can be multiple answers
{
    int t;
    cin >> t;
    while(t){
        int n,k,x;
        cin >> n >> k >> x;

        if(x != 1)   // if 1 is available then all numbers can be formed
        {
            cout << "YES" << endl;
            cout << n << endl;
            while(n)
            {
                cout << 1 << " ";
                n--;
            }
            cout << endl;
        }

        else{   // if 1 is not available then 

            
            if(n % 2 == 1  && k >= 3)  // if number is odd then we need 2 and 3
            {
                cout << "YES" << endl;
                  cout << n/2 << endl;
                for(int i = 0 ; i < n/2-1 ; i++)
                {
                    cout << 2 << " ";
                }
                cout << 3 << endl;
            }
            else if(n % 2 == 0  && k >= 2)   // if number is even then 2 is needed
            {
                    cout << "YES" << endl;
                  cout << n/2 << endl;

                    for(int i = 0 ; i < n/2; i++)
                {
                    cout << 2 << " ";
                }

                cout << endl;
            }

            else
            {
                cout << "NO" << endl;
            }
        }
      t--;
    }
}