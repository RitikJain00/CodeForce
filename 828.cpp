#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t){
        int n;
        cin >> n;
        vector<int> arr(n);

        for(int& it : arr)
        {
            cin >> it;
        }

        sort(arr.begin(),arr.end(),greater<int>());


        bool flag = false;

       
            if(arr[0] > arr[1])
            {
                flag = true;
            }
            else
            {
                int j = 1;
                while(j < n && arr[j] == arr[0])
                {
                    j++;
                }
               
                if(j == n)
                {
                    flag = false;
                }
                else{
                    flag = true;
                    swap(arr[1],arr[j]);
                }

               
            }
        

        if(flag)
        {
            cout << "YES" << endl;

            for(int& it: arr)
            {
                cout << it << " ";
            }

        }
        else
        {
            cout << "NO" << endl;
        }

        cout << endl;
      t--;
    }
}