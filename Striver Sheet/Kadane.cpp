#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int max_end = INT_MIN;
        int max_now = 0;
        for (int i = 0 ; i<n ;i++)
        {
            max_now = max_now + nums[i];
            max_end = max(max_now,max_end);            
            if(max_now <0)
                max_now = 0;
        
        }
        return max_end;
    }
    
};