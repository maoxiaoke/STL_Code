//Source: https://leetcode.com/problems/two-sum/
//Author: maoxiaoke
//Data:   2016.10.11

/***************problem description*****************
*
*Given an array of integers, return indices of the two numbers such that they add up to a specific target.
*You may assume that each input would have exactly one solution.
*
*Example:
*Given nums = [2, 7, 11, 15], target = 9,
*Because nums[0] + nums[1] = 2 + 7 = 9,
*return [0, 1].
*
*The return format had been changed to zero-based indices.
*
*/
#include <iostream>
#include <vector>
#include <unordered_map>
#include <stdlib.h>
#include <iterator>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        vector<int> result;
        
        for (int i=0; i<nums.size(); i++){
            if (hash.find(target - nums[i]) != hash.end())
            {
                result.push_back(hash[target - nums[i]]);
                result.push_back(i);
                return result;
            }
            hash[nums[i]] = i;
        }
        
        result.push_back(-1);
        result.push_back(-1);
        return result;
        
    }
};

int main()
{
    typedef vector<int> IntNums;
    IntNums nums,result;

    nums.push_back(2);
    nums.push_back(7);
    nums.push_back(11);
    nums.push_back(15);

    int target = 9;

    Solution twosum;
    result = twosum.twoSum(nums,target);
    copy (result.begin(),result.end(),ostream_iterator<int>(cout, " "));
    cout << endl;

    system("pause");

}