#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t){

        int n;
        cin >> n;
        vector<int> arr;
        int maxi = INT_MIN;
        while(n)
        {
            int val;
            cin >> val;
            maxi = max(maxi,val);
            arr.push_back(val);
            n--;
        }

        sort(arr.begin(),arr.end());



        vector<int> b;

        while(arr.back() == maxi)
        {
            b.push_back(maxi);
            arr.pop_back();
        }

      

        if(arr.size() == 0 || b.size() == 0) 
        {
            cout << -1 << endl; 
        }
        else{
            cout << arr.size() << " " << b.size() << endl;
            for(int i = 0 ; i < arr.size() ; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;

             for(int i = 0 ; i < b.size() ; i++)
            {
                cout << b[i] << " ";
            }
            cout << endl;
        }
        
     t--;
    }
}