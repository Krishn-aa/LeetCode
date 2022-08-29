class Solution {
    public boolean isPalindrome(int x) {
        boolean result=false;
        if(x>=0)
        {
            int r,digit=0,num=x;
            
            while(num>0)
            {
                r=num%10;
                digit=digit*10+r;
                num=num/10;
            }
            if(digit==x)
                result=true;
        }
        return result;
    }
}