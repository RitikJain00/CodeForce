#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t){
        int n;
        cin >> n;

        string s;
        cin >> s;

        int start = 0;
        int end = n-1;

        int length = 0;

        while(start <= end)
        {
            if(s[start] != s[end])
            {
                start++;
                end--;
            }

            else
            {
                length = end-start + 1;
                break;
            }
        }

        cout << length << endl;
      t--;
    }
}