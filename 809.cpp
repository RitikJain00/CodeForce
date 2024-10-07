#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;                          // summation of all efficiency will be equal to zero
    while(n){                           // Sigma a1 + a2 + a3 + a4 = 0
        int num;
        cin >> num;
        num--;
        int sum = 0;

        while(num)
        {
            int val;
            cin >> val;
            sum += val;

            num--;
        }

        cout << -(sum) << endl;
      n--;
    }
}