#include<bits/stdc++.h>
using namespace std;
#define repl(i,L,R) for (int i = L; i < R; i++) 
#define reple(i,L,R) for (int i = L; i <= R; i++)
#define repg(i,L,R) for (int i = L; i > R; i--)
#define repge(i,L,R) for (int i = L; i >= R; i--)
#define ll long long 
#define ull unsigned long long
#define ui unsigned int
#define us unsigned short
#define mp make_pair
#define fi first
#define se second
#define pb push_back
typedef int elem_t;
typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 

using namespace std;
int main()
{
   int m,n;
   cin>>m;
   cin>>n;
   int r[m];
   int c[n];
   int matrix[m][n];
   repl(i,0,m)
   {
       repl(j,0,n)
       {
           cin>>matrix[i][j];
       }
   }
   repl(i,0,m)
   {
       repl(j,0,n)
       {
           if(matrix[i][j] == 0)
           {
               r[i] = -1;
               c[j] = -1;
           }
       }
       cout<<endl;
   }
   repl(i,0,m)
   {
       repl(j,0,n)
       {
           if(r[i] == -1 || c[j] == -1)
           {
               matrix[i][j] = 0;
           }
       }
   }
   repl(i,0,m)
   {
       repl(j,0,n)
       {
           cout<<matrix[i][j]<<" ";
       }
       cout<<endl;
   }
   return 0;
}

