#include <bits/stdc++.h>
using namespace std;
//For kth Maximum element
// int main()
// {  
//     priority_queue<int,vector<int>> q;
//     int i=1,k=2; //for 2nd maximum element
//     int ans;
//     q.push(10);
//     q.push(5);
//     q.push(70);
//     q.push(9);
//     q.push(11);
//     while(!q.empty())
//     {
//         if(i==k)
//         {
//             ans = q.top();
//             break;
//         }
//         i++;
//         q.pop();
//     }
//     cout<<"2nd Maximum element: "<<ans;


//     return 0;
// }

//For kth Maximum element
int main()
{  
    priority_queue <int, vector<int>, greater<int>> q;  
    int i=1,k=2; //for 2nd min element
    int ans;
    q.push(10);
    q.push(5);
    q.push(70);
    q.push(9);
    q.push(11);
    while(!q.empty())
    {
        if(i==k)
        {
            ans = q.top();
            break;
        }
        i++;
        q.pop();
    }
    cout<<"2nd Minimum element: "<<ans;


    return 0;
}