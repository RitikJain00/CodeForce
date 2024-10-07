#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t){
        int n;
        cin >> n;                           // just elements must present in ascending order
         vector<int> arr;

        while(n)
        {
            int val;
            cin >> val;

            if(arr.size() == 0)  // it means it is first element
            {
                arr.push_back(val);
            }
            else{
                if(val >= arr.back()) arr.push_back(val);  // if it is increaseing element

                else
                {
                    arr.push_back(val);   // here the problem comes where we have to insert two element 
                    arr.push_back(val);
                }
            }
            n--;
        }

        int size = arr.size();

        cout << size << endl;

        for(int  i = 0 ; i < size ; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
       
      t--;
    }
}