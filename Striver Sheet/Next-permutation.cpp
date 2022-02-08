#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index=-1;
        int index1;
        int n=nums.size();
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                index=i;
                break;
            }
        }
        if(index<0)
        {
            reverse(nums.begin(),nums.end());
        }
        else
        {
            for(int i=n-1;i>index;i--)
            {
                if(nums[index]<nums[i])
                {
                    index1=i;
                    break;
                }
            }
            swap(nums[index],nums[index1]);
            reverse(nums.begin()+index+1,nums.end());
        }
    }
};