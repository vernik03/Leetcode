class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle == "") return 0;                    
        int idx = haystack.find(needle) ;
        if(idx==haystack.size())
            return -1;
        return idx;
    }
};