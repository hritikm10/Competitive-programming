#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6] = {-1, 2, 5, -9, 7, -1};
    int k = 0;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] < 0)
            swap(arr[i], arr[k++]);
            
    }
     for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}