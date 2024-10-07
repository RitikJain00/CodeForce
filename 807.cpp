#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;                                                                          // Acha Question
    cin >> t;
    while(t){
        int n,m;
        cin >> n >> m;

        string x,s;                                         // s * x <= 25
        cin >> x >> s;
        bool flag = false ;
        int count = 0;

       for(int i = 0 ; i <= 5 ; i++)                          // Why 5 ?????   if we take the the worst case
        {
            if(x.find(s) != string::npos)                       // like s = 25   and x = 1
            {
                flag = true;                           // 1  2  4   8  16  32    ---------------> 5 operations 
                break;
            }

            x= x+x;
            count++;
        }

        if(flag) cout << count << endl;
        else cout << -1 << endl;
      t--;
    }
}