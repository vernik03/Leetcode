class Solution {
public:
    int romanToInt(string s) {
        int x=0;
        for(int i=0;i<s.length();i++){
           
            switch (s[i])
            {
            case 'I': switch (s[i+1])
                        {
                         
                        case 'V':   x+=4;  i++;   break;
                        case 'X':   x+=9;  i++;   break;
                        default:    x++;   break;
                        }
                break;
            case 'V':  switch (s[i+1])
                        {
                            default: x+=5;  break;
                        }
                break;
            case 'X':  switch (s[i+1])
                        {
                         case 'L':  x+=40;  i++;   break;
                        case 'C':  x+=90; i++;    break;
                         default:  x+=10;    break;
                        }
                break;
            case 'L':   switch (s[i+1])
                        {
                        default:  x+=50;  break;
                        }
                break;
            case 'C': switch (s[i+1])
                        {
                        case 'D':  x+=400;  i++;   break;
                        case 'M': x+=900; i++;  break;
                          default:  x+=100;  break;
                        }
                break;
            case 'D':  switch (s[i+1])
                        {
                              default:   x+=500;    break;
                        }
                break;
            case 'M': switch (s[i+1])
                        {
                              default:    x+=1000;   break;
                        }
                break;
            default:  break;
            }
        }
        return x;
    }
};