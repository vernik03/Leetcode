class Solution {
public:
    int divide(int dividend, int divisor) {
        int negatives=0;
        long numerator=dividend, 
		     denominator=divisor, 
		     ans=0;
        
        if (numerator == INT_MIN && denominator == -1) 
            return INT_MAX;
        
        if(numerator < 0) 
            ++negatives, 
            numerator=abs(numerator);
        if(denominator < 0) 
            ++negatives, 
            denominator=abs(denominator);
        for(int i=31; i >= 0; --i)
            if((denominator<<i) <= numerator)
                numerator -= (denominator<<i),
                ans       |= (1<<i);
		
        return (negatives & 1)
				?-ans
				: ans;
    }
};