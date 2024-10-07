#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int val = INT_MAX;
    

    while(n)
    {
        int temp;
        cin >> temp;
        val = min(val,abs(temp));
        n--;
    }

    cout << val << endl;
    
    
}