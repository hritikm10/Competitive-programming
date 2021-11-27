#include <bits/stdc++.h>
using namespace std;

// 1st Method (n log n)
// int main()
// {  
//     int n;
//     cout<<"Enter size of array"<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"Enter elements of array"<<endl;
//     for(int i=0 ; i<n ; i++)
//     {
//         cin>>arr[i];
//     }
//     sort(arr,arr+n);
//     cout<<"Smallest element: "<<arr[0]<<endl;
//     cout<<"Largest element: "<<arr[n-1];
     
//     return 0;
// }

// 2nd method (n)
int main()
{  
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array"<<endl;
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    int max = arr[0];
    int min = arr[1];
    for(int i = 2 ; i<n ; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    cout<<"Smallest element: "<<min<<endl;
    cout<<"Largest element: "<<max;
    return 0;
}