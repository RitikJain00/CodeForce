#include <bits/stdc++.h>
using namespace std;    // Question ajeeb h thik  se input output nhi de rakha
                 ///////////////////////////////////////////  skip it
string s;
int main()
{
    cin >> s;
    while(cin >> s >> s) 
        cout << ((s.find("...") != -1) ? 2 : count(s.begin(), s.end(), '.')) << '\n';
}