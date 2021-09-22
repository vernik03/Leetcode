class Solution {
public:
    int reverse(int x1) {
        long int y=0;
        long int x = x1;
       bool flag=false;
        if(x<0){
            x*=-1;
            flag=true;
        }
            y+=x%10;
            x/=10;
            while(x>=1){
            y*=10;
            y+=x%10;
            x/=10;         
            }   
        if(flag){
            y*=-1;
        }
        if (y>INT_MAX || y<INT_MIN){
            y=0;
        }
        
        return y;
    }
};