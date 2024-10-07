#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n){
        int num;
        cin >> num;

        if(num % 3 == 0) 
        {
            cout << "Second" << endl;
        }
        else{
            cout << "First" << endl;
        }
      n--;
    }
}