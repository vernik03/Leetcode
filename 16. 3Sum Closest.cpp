class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int res = nums[0] + nums[1] + nums[n-1];
        sort(nums.begin() , nums.end());
        
        for(int i=0 ; i<n-2 ; i++){
            
            int ptr1 = i+1 , ptr2 = n-1;
            
            while(ptr1<ptr2)
            {
                int curr_sum = nums[i] + nums[ptr1] + nums[ptr2];
                
                if(curr_sum<target)
                    ptr1++;
                else
                    ptr2--;
                
                if(abs(curr_sum-target) < abs(res-target))
                    res=curr_sum;
            }
            
        }
        return res;
    }
};