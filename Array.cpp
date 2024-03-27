/*

    Here are some algorithms from LeetCode, which are acutually some functions I written.

*/

#include <bits/stdc++.h>
using namespace std;

// 使用快慢指针
// 见一删一，时间复杂度为 O(n^2)
int removeDuplicates(vector<int>& nums) {
    int index = 0; int prev = -10002;
    for(index = 0; index <nums.size();index++){
        if(nums[index]==prev){
            nums.erase(nums.begin()+index);
            index--;
        }
        prev = nums[index];
    }
    return nums.size();