class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>sub;
        int left=0,right=0; 
        int max_size=0;
        while(left<s.size() && right<s.size())
        {
            if(sub.find(s[right])==sub.end())
            {
                sub.insert(s[right]);
                int n=sub.size();
                max_size=max(max_size,n);
                right++;
            }
            else
            {
                sub.erase(s[left]);
                left++;
            }
        }
        return max_size;
    }
};