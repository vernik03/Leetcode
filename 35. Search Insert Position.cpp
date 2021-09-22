class Solution {
public:
     int searchInsert(vector<int>& nums, int target) {
        int c;
        for(int i=0 ;i< nums.size(); i++)
        {
            if(target==nums[i])
            {c= i;
             break;}
            
            if(target<nums[i])
            {c= i;
             break;}
        }
        return c;
    }
};