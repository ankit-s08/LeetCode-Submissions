/*
using bruteforce it will be of O(n^2) complexity

here we r using % operator

approach : 
shift all elements by +k position , if the i+k posiotion is out of array length 
then start index form 0(begining).

temp[(i+k)%n] =nums[i]       
(i+k)%n keeps the value in (0,n) in range of 0 to n
*/


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        
        
        //if we don't use temp the operations may overwrite the array that's why we           use temp 
        vector<int> temp(n);
        
        for(int i=0; i<n; i++)
        {
            temp[(i+k)%n] = nums[i];
        }
        
        //copy temp in nums
        nums = temp;
        
    }
};