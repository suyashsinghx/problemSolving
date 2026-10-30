# Max Number of K-Sum Pairs

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an integer array `nums` and an integer `k`.

In one operation, you can pick two numbers from the array whose sum equals `k` and remove them from the array.

Return  *the maximum number of operations you can perform on the array*.

 

 **Example 1:** 

```
Input: nums = [1,2,3,4], k = 5
Output: 2
Explanation: Starting with nums = [1,2,3,4]:
- Remove numbers 1 and 4, then nums = [2,3]
- Remove numbers 2 and 3, then nums = []
There are no more pairs that sum up to 5, hence a total of 2 operations.
```

 **Example 2:** 

```
Input: nums = [3,1,3,4,3], k = 6
Output: 1
Explanation: Starting with nums = [3,1,3,4,3]:
- Remove the first two 3's, then nums = [1,4,3]
There are no more pairs that sum up to 6, hence a total of 1 operation.
```

 

 **Constraints:** 

- 1 <= nums.length <= 105
- 1 <= nums[i] <= 109
- 1 <= k <= 109

## Solution

**Language:** C++  
**Runtime:** 98 ms (beats 43.92%)  
**Memory:** 61.6 MB (beats 99.86%)  
**Submitted:** 2026-10-30T06:12:52.902Z  

```cpp
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {

     int l =0;
     int r = nums.size()-1;
     int count =0;

     sort(nums.begin(), nums.end());

     while(l < r){

        if(nums[l] + nums[r] == k){
            count++;
            l++; r--;
        }
        else if(nums[l] + nums[r] >= k){
            r--;
        }else{
            l++;
        }
     }

     return count;

    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/max-number-of-k-sum-pairs/)