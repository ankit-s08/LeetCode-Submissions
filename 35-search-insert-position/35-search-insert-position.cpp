/*
approach:
case 1 : if target is present , will be find out by binary search
case 2 : if target is not present
        return mid      if end<mid and mid = start
        return mid+1    if start > mid and mid = end
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int start =0; 
        int end = nums.size() -1;
        int mid = start +(end - start)/2;
        
        while(start <= end)
        {
            if(nums[mid] == target)
                return mid;
            
            else if(nums[mid] < target)
                start = mid + 1;
            
            else if(nums[mid] > target)
                end = mid -1;
            
            mid = start +(end - start)/2;
        }
        
        //happens when end is moved 1 pos back cause nums[mid] > target
        if(end < mid)
            return mid;
        
        //when start is moved 1 pos forward cause nums[mid] < target
        //else if(mid < start)
        return mid+1;
        
    }
};