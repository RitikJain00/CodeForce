#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t){
        int n,m;
        cin >> n >> m;
        string str;
        cin >> str;
        map<int,int> index;

        for(int i = 0 ; i < m ; i++)
        {
            int val;
            cin >> val ;
            index[val]++;
        }

        string change;
        cin >> change;

        sort(change.begin(),change.end());

      //  cout << n << " " << m << endl << str << " " << change << endl;
        

       int i = 0;
       int j = m-1;

       while( i <= j)
       {
            int k = index.begin() ->first;
            int val = index.begin() ->second;
            index.erase(k);

            str[k-1] = change[i];
            i++;
            val--;
           j-= val;
       }

       cout << str << endl;

      t--;
    }
}