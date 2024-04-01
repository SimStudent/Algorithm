/*

    Here are some algorithms from LeetCode, which are acutually some functions I written.

    Two pointers are welcomed. 

*/

#include <bits/stdc++.h>
using namespace std;

// 删除数组中重复的元素 || 使用快慢指针
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
}

int removeDuplicates_2(vector<int>& nums) {
    int slow = 0, fast = 0;
    while(fast < nums.size()){
        if(nums[slow]!=nums[fast]){
            slow++;
            nums[slow]=nums[fast];
            // slow++;
        }
        fast++;
    }
    return slow+1;  // 用 slow+1 作为有效的数组大小
}

// 删除特指的 elem  力扣第 27 题「移除元素」
int removeElement(vector<int>& nums, int val) {
    // remove(nums.begin(),nums.end(),val); // 假删除，用后面的不同的数值进行覆盖
    int slow = 0 , fast = 0;
    while(fast<nums.size()){
        if(nums[fast]!=val){
            nums[slow] = nums[fast];
            slow++;
        }
        fast++;
    }
    return slow;
}

int removeElement_2(vector<int>& nums, int val) { 
        int index = 0;
        for (int i = 0; i < nums.length; i++) {  // for循环的 i 本质上也是双指针
            if (nums[i] == val) 
            {
                continue;
            }
            nums[index] = nums[i];
            index++;
        }
        return index;
    }

// 两数之和（双指针技巧）
// https://leetcode.cn/problems/two-sum-ii-input-array-is-sorted/description/

vector<int> twoSum(vector<int>& numbers, int target) {  // O(n^2) 明显超时
    int i=0, j;
    int size = numbers.size();
    for(;i<size;i++){
        for(j=i+1;j<size;j++){
            int temp = numbers[i]+numbers[j];
            if(temp==target){
                vector<int> a(2);
                a[0] = i+1; a[1] = j+1;
                return a;
            }
        }
    }
    vector<int> a;
    return a;
}

