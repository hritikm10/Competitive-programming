#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
//For loops
#define repl(i,L,R) for (int i = L; i < R; i++) 
#define reple(i,L,R) for (int i = L; i <= R; i++)
#define repg(i,L,R) for (int i = L; i > R; i--)
#define repge(i,L,R) for (int i = L; i >= R; i--)
#define oto(x,d)for(auto x:d){cout<<x<<endl;}
#define all(v) v.begin(), v.end()
#define mk make_pair
#define pii pair<int, int>
#define nn(s){s.size();}
#define vb vector<bool>
#define ff first
#define ss second
#define vi vector<int>
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
#define imax INT_MAX
#define imin INT_MIN



int fact(int n) {
    int fact = 1;
    reple(i,1,n)
        fact = fact * i;
    return fact;
}
 
int nCr(int num, int r) {
    int result =  fact(num) / (fact(r) * fact(num - r));
    return result;
}

void solve()
{
    int num = 5;
    int m = 4;
    reple(i,1,m)
    {
        reple(j,1,i)
        {
            cout<< nCr(i,j);
        }
        cout<<endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int a,b,c,p,q,r;
int test=1;
//cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
