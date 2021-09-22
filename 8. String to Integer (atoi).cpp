class Solution {
public:
    int myAtoi(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        long long int res=0, sign=1;
        int len = s.length();
        int i;
        for(i=0; i<s.length(); i++)
        {
            if(i>=len) return 0;
            if(s[i]!=' ')
                break;
        }
        if(s[i]=='+'||s[i]=='-')
            sign= s[i++]=='-' ?-1:1;
        while(i<len && isdigit(s[i]))
        {
            res = res*10 + (s[i]-'0');
            if(sign*res<INT_MIN)
            return INT_MIN;
            if(sign*res>INT_MAX)
            return INT_MAX;
            i++;
            
        }
        return sign*res;
    }
};
