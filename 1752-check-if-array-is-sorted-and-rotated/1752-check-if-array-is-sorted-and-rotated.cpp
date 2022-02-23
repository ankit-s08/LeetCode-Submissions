/*
approach : arr[i-1]> arr[i] can only be happen once or 0 time in whole traversal if it is sorted          and rotated
        if this is happening more than one time then it is not sorted or rotated    
*/
class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n=nums.size();
        for(int i=1; i<n; i++)
        {
            if(nums[i-1]>nums[i])
                count++;            
        }
        if(nums[n-1]>nums[0])
            count++;
        
        return (count<=1);        
    }
};