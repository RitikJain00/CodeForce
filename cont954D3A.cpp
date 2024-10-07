#include<bits/stdc++.h>
using namespace std;

void updateMatrix(vector<vector<int>>& matrix, int n , int m)
{
   
   vector<pair<int,int>> v = {{-1,0},{0,1},{1,0}, {0,-1}};

      for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < m ; j++)
            {
               
                int val = INT_MIN;

                for(int k = 0 ; k < 4 ; k++)
                {
                    int row = i + v[k].first;
                    int col = j + v[k].second;

                    if(row >= 0 && row < n && col >= 0 && col < m)
                    {
                        
                          val = max(val , matrix[row][col]);
                    
                    }
                }

                    if(matrix[i][j] > val)
                    {
                        matrix[i][j] = val;
                    }
                
                
            }
        }
    
}
int main()
{
    int t;
    cin >> t;
    while(t){
        int n,m;
        cin >> n >> m;

        vector<vector<int>> matrix(n , vector<int> (m,0));

        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < m ; j++)
            {
                cin >> matrix[i][j];
            }
        }

        
        updateMatrix(matrix,n,m);


         for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < m ; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }

      t--;
    }
}