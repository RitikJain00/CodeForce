#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n){
        int g;
        int x;

        cin >> g >> x;
        vector<int> store;

        for(int i = 0 ; i < g ; i++)                //    Why we store 
        {                                           // cin >> b               just take one by one number
            int num;                                  // fuel = max(fuel , b-a)   initially a = 0
            cin >> num;                              // a = b
            if(num < x) store.push_back(num);           // fule = max(fuel , 2*(x-a))  // last case
        }

        int fuel = store[0] - 0;

        for(int i = 1 ; i < store.size() ; i++)
        {
            fuel = max(fuel,store[i] - store[i-1]);
        }

        fuel = max(fuel , 2*(x-store.back()));

        cout << fuel << endl;
      n--;
    }
}