class Solution {
public:
    bool isPalindrome(int x) {
        int digit;
        int temp=x;
        long long rev=0;
        while(x>0){
            digit=x%10;
            rev = rev * 10 + digit;
            x=x/10;
        }
        x=temp;
        if(x<0){
            return false;
        }
        else if(x==rev){
            return true;
        }
        else{
            return false;
        }
    }
};