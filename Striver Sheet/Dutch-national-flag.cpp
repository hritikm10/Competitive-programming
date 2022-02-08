#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[9] = {1, 0, 2, 2, 0, 1, 0, 0, 1};
    vector<int> v;
    int count0 = 0, count1 = 0, count2 = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            count0++;
        else if (arr[i] == 1)
            count1++;
        else
            count2++;
    }
    for (int i = 0; i < count0; i++)
        v.push_back(0);
    for (int i = 0; i < count1; i++)
        v.push_back(1);
    for (int i = 0; i < count2; i++)
        v.push_back(2);

    vector<int>::iterator itr;
    for (itr = v.begin(); itr < v.end(); itr++)
    {
        cout << (*itr) << " ";
    }

    return 0;
}