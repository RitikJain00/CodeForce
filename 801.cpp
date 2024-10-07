#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    while(n)
    {
         int boxes;
       cin >> boxes;
       int k ;
      cin >> k;

    vector<int> store(boxes);

    for(int i = 0 ; i < boxes ; i++)
    {
        cin >> store[i];
    }

    bool flag = true;                        

    if(k == 1)
    {
       for(int i = 1 ; i < boxes; i++)
       {
            if(store[i] < store[i-1])   //     is_sorted(store , store + boxes )  ---> return true or false  check sorted or not
            {
                cout << "NO" << endl;
                flag = false;
                break;  
            }
       } 
    }

      if(flag)  cout << "YES" << endl;
      n--;
    }
   
}

