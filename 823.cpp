#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t){
        int a,b,c,d;
        cin >> a >> b >> c >> d;

        if(b > d ) cout << -1 << endl;

        else
        {
             int height = d - b;
        int width = a + height;

        if(width < c)
        {
            cout << -1 << endl;
        } 

        else{
            cout << height + (width - c) << endl;
        }
      
        }

       t--;
    }
}