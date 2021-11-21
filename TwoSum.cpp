#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=sizeof nums;
        while (true)
        {
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(target==nums[i]+nums[j])
                {
                    cout<<i<<","<<j;
                    break;
                }
            }
        }
            /* code */
        }
        

    }
};