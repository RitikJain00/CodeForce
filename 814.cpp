#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t){
        int a,b,c;
        cin >> a >> b >> c;

        if(c & 1)  // if c is odd
        {
            if(a >= b) cout << "First" << endl;
            else cout << "Second" << endl;
        }
        else{
            if(a > b) cout << "First" << endl;        //  if c is even
            else cout << "Second" << endl;
        }
      t--;
    }
}