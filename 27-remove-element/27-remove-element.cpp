class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int count = 0;
        int i =0;
        while(i<n-count)
        {
            if(nums[i] == val)
            {
                count++;
                for(int j=i; j<n-count; j++)
                {
                    nums[j] = nums[j+1];
                }
                i--;
            }
            i++;
        }
        return (n-count);
    }
    
};