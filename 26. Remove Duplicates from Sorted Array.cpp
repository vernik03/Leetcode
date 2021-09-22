class Solution {
public:
     int removeDuplicates(vector<int>& a) 
    {
        int n = a.size();
        if(n == 0) return 0;
        int index_to_change = 1;
        int current_index = 1;
        
        while(current_index < n)
        {
            if(a[current_index] == a[current_index - 1])
            {
                current_index++;
            }
            else
            {
                a[index_to_change] = a[current_index];
                current_index++;
                index_to_change++;
            }
        }
        
        
        return index_to_change;
    
    }
};