class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;

            long  sum=0,num=x,rem=0;
            while(num>0)
            {
                rem=num%10;
                sum= sum*10 + rem;
                num = num/10;
            }
        
        if(sum==x)
            return true;
        else return false;
    }
};