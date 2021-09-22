class Solution {
public:
    int n=0,b,e;
    string st;
    void helper(int i)
    {
        int l=i,h=i;
        while(l>=0 && h<st.length() && st[l]==st[h])
        {
            if(h-l+1>n){
                n=h-l+1;
                b=l;
                e=h;
            }
            l--;
            h++;
        }
        if(i<st.length() && st[i]==st[i+1])
        {
            l=i;h=i+1;
            while(l>=0 && h<st.length() && st[l]==st[h])
        {
            if(h-l+1>n){
                n=h-l+1;
                b=l;
                e=h;
            }
            l--;
            h++;
        }
        }
    }
    string longestPalindrome(string s) {
        st=s;
        for(int i=0;i<s.length();i++)
        {
            helper(i);
        }
        return s.substr(b,n);
    }
};