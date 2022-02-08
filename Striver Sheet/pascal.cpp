#define reple(i,L,R) for (int i = L; i <= R; i++)
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
vector<vector<int>> generate(int m) {
vector<vector<int>> vect;
vector<int> row;

for(int i = 0 ; i<m ; i++)
{
for(int j = 0 ; j<=i ; j++)
{
   if(j == 0 || j == i)
   {
       row.push_back(1);
   }
    else{
        row.push_back(vect[i - 1][j] + vect[i - 1][j - 1]);
    }
}
    vect.push_back(row);
    row.clear();
    
}
    return vect;
}
    

};